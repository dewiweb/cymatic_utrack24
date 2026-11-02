// rea decompile_all
// name: FUN_0046f3a0
// address: 0x46f3a0
// body: available
// range: 0x46f3a0-0x46f611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f3a0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  undefined4 in_stack_ffffffb8;
  int *in_stack_ffffffbc;
  void *local_14;
  undefined4 local_10;
  int local_c;
  
  if ((0 < param_1[2]) && (0 < param_1[3])) {
    if (in_ECX[2] == 0) {
      FUN_0044dd00(param_1);
      return;
    }
    bVar2 = false;
    piVar7 = (int *)(in_ECX[2] + -1);
    if (-1 < (int)piVar7) {
      iVar4 = (int)piVar7 * 0x10;
      bVar1 = bVar2;
      do {
        piVar6 = (int *)(*in_ECX + iVar4);
        if ((((*piVar6 < param_1[2] + *param_1) && (piVar6[1] < param_1[3] + param_1[1])) &&
            (*param_1 < piVar6[2] + *piVar6)) &&
           (((param_1[1] < piVar6[3] + piVar6[1] && (0 < param_1[2])) &&
            ((0 < param_1[3] && ((0 < piVar6[2] && (0 < piVar6[3])))))))) {
          if ((*piVar6 < *param_1) ||
             (((piVar6[1] < param_1[1] || (param_1[2] + *param_1 < piVar6[2] + *piVar6)) ||
              (param_1[3] + param_1[1] < piVar6[3] + piVar6[1])))) {
            in_stack_ffffffb8 = 0x46f4b4;
            in_stack_ffffffbc = param_1;
            cVar3 = FUN_00471cd0(param_1);
            bVar1 = bVar2;
            if (cVar3 == '\0') {
              bVar1 = true;
              bVar2 = bVar1;
            }
          }
          else if (piVar7 < (int *)in_ECX[2]) {
            in_stack_ffffffb8 = 0x46f4a8;
            in_stack_ffffffbc = piVar7;
            FUN_00472850(piVar7);
            bVar1 = bVar2;
          }
        }
        iVar4 = iVar4 + -0x10;
        piVar7 = (int *)((int)piVar7 + -1);
      } while (-1 < (int)piVar7);
      if ((bVar1) && (0 < in_ECX[2])) {
        local_14 = (void *)0x0;
        local_10 = 0;
        local_c = 0;
        if ((0 < param_1[2]) && (0 < param_1[3])) {
          in_stack_ffffffb8 = 0x46f51d;
          in_stack_ffffffbc = param_1;
          FUN_0044dd00(param_1);
        }
        iVar4 = in_ECX[2] + -1;
        if (-1 < iVar4) {
          iVar5 = iVar4 * 0x10;
          do {
            piVar7 = (int *)(*in_ECX + iVar5);
            if (((*piVar7 < param_1[2] + *param_1) && (piVar7[1] < param_1[3] + param_1[1])) &&
               ((*param_1 < *piVar7 + piVar7[2] &&
                ((((param_1[1] < piVar7[1] + piVar7[3] && (0 < param_1[2])) && (0 < param_1[3])) &&
                 ((0 < piVar7[2] && (0 < piVar7[3])))))))) {
              in_stack_ffffffb8 = 0x46f588;
              FUN_0046f160(piVar7);
              in_stack_ffffffbc = piVar7;
              if (local_c == 0) goto LAB_0046f5ae;
            }
            iVar5 = iVar5 + -0x10;
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
        }
        FUN_00473690(&local_14,in_stack_ffffffb8,in_stack_ffffffbc);
LAB_0046f5ae:
        FID_conflict__free(local_14);
        return;
      }
    }
    iVar4 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar4) {
      FUN_0040ede0(iVar4 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar4 = in_ECX[2];
    in_ECX[2] = iVar4 + 1;
    piVar7 = (int *)(iVar4 * 0x10 + *in_ECX);
    if (piVar7 != (int *)0x0) {
      *piVar7 = *param_1;
      piVar7[1] = param_1[1];
      piVar7[2] = param_1[2];
      piVar7[3] = param_1[3];
    }
  }
  return;
}

