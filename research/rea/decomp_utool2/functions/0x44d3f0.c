// rea decompile_all
// name: FUN_0044d3f0
// address: 0x44d3f0
// body: available
// range: 0x44d3f0-0x44d714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044d3f0(int param_1,double param_2,int param_3,int param_4,int param_5)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  double dVar4;
  int local_2c;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff9d8;
  local_10 = ExceptionList;
  dVar4 = (in_XMM3_Qa - in_XMM2_Qa) / (double)param_1;
  if (((param_1 < 1) || (dVar4 <= 0.0)) || (param_2 <= 0.0)) {
    *(undefined1 *)(in_ECX + 10) = 1;
    return 0;
  }
  if (((param_1 != in_ECX[9]) || (in_ECX[8] != param_3)) ||
     ((in_XMM2_Qa != *(double *)(in_ECX + 4) ||
      ((dVar4 != *(double *)(in_ECX + 6) || ((char)in_ECX[10] != '\0')))))) {
    ExceptionList = &local_10;
    in_ECX[8] = param_3;
    in_ECX[9] = param_1;
    *(double *)(in_ECX + 4) = in_XMM2_Qa;
    *(double *)(in_ECX + 6) = dVar4;
    *(undefined1 *)(in_ECX + 10) = 0;
    if (in_ECX[2] < param_1 * param_3) {
      FUN_0044d8b0();
    }
    if ((dVar4 * param_2 <= (double)param_4) && (param_5 != 0)) {
      local_2c = 0;
      local_20 = SUB84(in_XMM2_Qa * param_2 + 6755399441055744.0,0);
      iVar2 = 0;
      local_8 = 0;
      if (0 < param_1) {
        do {
          in_XMM2_Qa = in_XMM2_Qa + dVar4;
          local_18 = SUB84(in_XMM2_Qa * param_2 + 6755399441055744.0,0);
          if (-1 < (int)local_20) {
            if (((int)local_20 >> 0x1f < *(int *)(param_5 + 0x14)) ||
               (((int)local_20 >> 0x1f <= *(int *)(param_5 + 0x14) &&
                (local_20 < *(uint *)(param_5 + 0x10))))) {
              FUN_0044ca60();
              iVar3 = local_2c;
              if (in_ECX[8] < 0) {
                iVar3 = in_ECX[8];
              }
              iVar1 = 0;
              if (0 < iVar3) {
                do {
                  FUN_0044c770();
                  iVar1 = iVar1 + 1;
                } while (iVar1 < iVar3);
              }
            }
            else {
              iVar3 = 0;
              if (0 < in_ECX[8]) {
                do {
                  iVar1 = in_ECX[9] * iVar3;
                  iVar3 = iVar3 + 1;
                  *(undefined2 *)(*in_ECX + (iVar1 + iVar2) * 2) = 0;
                } while (iVar3 < in_ECX[8]);
              }
            }
          }
          iVar2 = iVar2 + 1;
          local_20 = local_18;
        } while (iVar2 < param_1);
      }
      in_ECX[9] = iVar2;
      FID_conflict__free((void *)0x0);
      ExceptionList = local_10;
      return 1;
    }
    param_1 = 0;
    iVar3 = iVar2;
    if (0 < in_ECX[8]) {
      do {
        while (-1 < iVar3 + -1) {
          FUN_0044d050();
          iVar3 = iVar3 + -1;
        }
        param_1 = param_1 + 1;
        iVar3 = iVar2;
      } while (param_1 < in_ECX[8]);
    }
  }
  ExceptionList = local_10;
  return 1;
}

