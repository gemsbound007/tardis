#ifndef TARDIS_STORAGE_H
#define TARDIS_STORAGE_H

#include <stdint.h>

#include "status.h"

typedef struct StorageModel
{
  double *packet_nus;
  double *packet_mus;
  double *packet_energies;
  double *output_nus;
  double *output_energies;
  double *last_interaction_in_nu;
  int64_t *last_line_interaction_in_id;
  int64_t *last_line_interaction_out_id;
  int64_t *last_line_interaction_shell_id;
  int64_t *last_interaction_type;
  int64_t no_of_packets;
  int64_t no_of_shells;
  double *r_inner;
  double *r_outer;
  double *v_inner;
  double time_explosion;
  double inverse_time_explosion;
  double *electron_densities;
  double *inverse_electron_densities;
  double *line_list_nu;
  double *continuum_list_nu;
  double *line_lists_tau_sobolevs;
  int64_t line_lists_tau_sobolevs_nd;
  double *line_lists_j_blues;
  int64_t line_lists_j_blues_nd;
  double *line_lists_Edotlu;
  int64_t no_of_lines;
  int64_t no_of_edges;
  int64_t line_interaction_id;
  double *transition_probabilities;
  int64_t transition_probabilities_nd;
  int64_t *line2macro_level_upper;
  int64_t *macro_block_references;
  int64_t *transition_type;
  int64_t *destination_level_id;
  int64_t *transition_line_id;
  double *js;
  double *nubars;
  double spectrum_start_nu;
  double spectrum_delta_nu;
  double spectrum_end_nu;
  double spectrum_virt_start_nu;
  double spectrum_virt_end_nu;
  double *spectrum_virt_nu;
  double sigma_thomson;
  double inverse_sigma_thomson;
  double inner_boundary_albedo;
  int64_t reflective_inner_boundary;
  int64_t current_packet_id;
  double *chi_bf_tmp_partial;
  double *t_electrons;
  double *l_pop;
  double *l_pop_r;
  ContinuumProcessesStatus cont_status;
  double *virt_packet_nus;
  double *virt_packet_energies;
  double *virt_packet_last_interaction_in_nu;
  int64_t *virt_packet_last_interaction_type;
  int64_t *virt_packet_last_line_interaction_in_id;
  int64_t *virt_packet_last_line_interaction_out_id;
  int64_t virt_packet_count;
  int64_t virt_array_size;
} storage_model_t;

#endif // TARDIS_STORAGE_H
