// rea decompile_all
// name: FUN_005f86a0
// address: 0x5f86a0
// body: available
// range: 0x5f86a0-0x5f87b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005f86a0(int param_1,int param_2)

{
  uint uVar1;
  double dVar2;
  int in_ECX;
  uint in_EDX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double local_14;
  
  uVar3 = 0;
  uVar4 = 0;
  dVar2 = (double)(&DAT_00c24bb0)[-(param_1 >> 0x1f)];
  local_14 = 4294967295.0;
  iVar5 = param_2;
  if (in_EDX != 0) {
    do {
      dVar6 = *(double *)(in_ECX + uVar4 * 8);
      if (dVar6 <= 0.0) {
        if (0.0 <= dVar6) goto LAB_005f8734;
        dVar6 = 1e+32;
      }
      else {
        dVar6 = dVar6 * (0.2402265069591007 / ((double)param_1 + dVar2));
        FUN_006f8470();
        dVar6 = (dVar6 * 0.5) / 0.6931471805599453;
        if (dVar6 < 0.0) {
LAB_005f8734:
          dVar6 = 0.0;
        }
      }
      uVar1 = uVar4 + 1;
      dVar6 = ((double)(int)(param_1 - uVar1) +
              (double)(&DAT_00c24bb0)[-((int)(param_1 - uVar1) >> 0x1f)]) * dVar6 +
              (double)iVar5 + (double)(&DAT_00c24bb0)[-(iVar5 >> 0x1f)];
      if (dVar6 < local_14) {
        uVar3 = uVar4;
        local_14 = dVar6;
      }
      uVar4 = uVar1;
      iVar5 = iVar5 + param_2;
    } while (uVar1 < in_EDX);
  }
  return uVar3 + 1;
}

