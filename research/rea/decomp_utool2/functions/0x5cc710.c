// rea decompile_all
// name: FUN_005cc710
// address: 0x5cc710
// body: available
// range: 0x5cc710-0x5cc850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cc710(void)

{
  double dVar1;
  uint uVar2;
  int in_ECX;
  double *pdVar3;
  float10 fVar4;
  double in_XMM1_Qa;
  double *local_28 [2];
  uint local_20;
  double local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b076;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_XMM1_Qa;
  (**(code **)(**(int **)(in_ECX + 0x98) + 0xc))(local_28,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (0.0 < local_1c) {
    for (pdVar3 = local_28[0]; pdVar3 != local_28[0] + local_20; pdVar3 = pdVar3 + 1) {
      if (local_1c == *pdVar3) goto LAB_005cc832;
    }
  }
  fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x98) + 0x38))();
  local_1c = (double)fVar4;
  if (0.0 < local_1c) {
    for (pdVar3 = local_28[0]; pdVar3 != local_28[0] + local_20; pdVar3 = pdVar3 + 1) {
      if (local_1c == *pdVar3) goto LAB_005cc832;
    }
  }
  uVar2 = local_20 - 1;
  local_1c = 0.0;
  if (-1 < (int)uVar2) {
    do {
      if (((uVar2 < local_20) && (dVar1 = local_28[0][uVar2], 44100.0 <= dVar1)) &&
         ((local_1c < 1.0 || (dVar1 < local_1c)))) {
        local_1c = dVar1;
      }
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
    if (0.0 < local_1c) goto LAB_005cc832;
  }
  if (local_20 == 0) {
    local_1c = 0.0;
  }
  else {
    local_1c = *local_28[0];
  }
LAB_005cc832:
  FID_conflict__free(local_28[0]);
  ExceptionList = local_10;
  return;
}

