// rea decompile_all
// name: FUN_00496a75
// address: 0x496a75
// body: available
// range: 0x496a75-0x496c8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496abe to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496a75(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  ushort *puVar5;
  ushort uVar6;
  char *pcVar7;
  byte *pbVar8;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x240);
  if (iVar4 == 0) {
LAB_00496ab5:
    if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
    if ((*(uint *)(param_1 + 0x28) & 4) == 0) {
      pcVar3 = (char *)FUN_00495b75(2);
      if (pcVar3 == (char *)0x0) {
        FUN_00495a5d();
        FUN_004914ad();
      }
      else {
        FUN_00495a35(pcVar3,param_3);
        iVar4 = FUN_00495a5d();
        if (iVar4 == 0) {
          pcVar3[param_3] = '\0';
          cVar2 = *pcVar3;
          pcVar7 = pcVar3;
          while (cVar2 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar2 = *pcVar7;
          }
          if (pcVar7 + 1 <= pcVar3 + param_3 + -2) {
            cVar2 = pcVar7[1];
            pbVar8 = (byte *)(pcVar7 + 2);
            uVar1 = (uint)(cVar2 != '\b') * 4 + 6;
            local_8 = (uint)(pcVar3 + (param_3 - (int)pbVar8)) / uVar1;
            if ((((uint)(pcVar3 + (param_3 - (int)pbVar8)) % uVar1 == 0) && (local_8 < 0x1999999a))
               && (iVar4 = FUN_0049176b(), iVar4 != 0)) {
              if (0 < (int)local_8) {
                puVar5 = (ushort *)(iVar4 + 4);
                do {
                  if (cVar2 == '\b') {
                    puVar5[-2] = (ushort)*pbVar8;
                    puVar5[-1] = (ushort)pbVar8[1];
                    *puVar5 = (ushort)pbVar8[2];
                    uVar6 = (ushort)pbVar8[3];
                    pbVar8 = pbVar8 + 4;
                  }
                  else {
                    puVar5[-2] = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
                    puVar5[-1] = (ushort)pbVar8[2] * 0x100 + (ushort)pbVar8[3];
                    *puVar5 = (ushort)pbVar8[4] * 0x100 + (ushort)pbVar8[5];
                    uVar6 = (ushort)pbVar8[6] * 0x100 + (ushort)pbVar8[7];
                    pbVar8 = pbVar8 + 8;
                  }
                  puVar5[1] = uVar6;
                  puVar5[2] = (ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1];
                  pbVar8 = pbVar8 + 2;
                  puVar5 = puVar5 + 5;
                  local_8 = local_8 - 1;
                } while (local_8 != 0);
              }
              FUN_004995b6(param_1);
              FUN_00491789(param_1,iVar4);
              return;
            }
          }
          FUN_00491216();
        }
      }
    }
    else {
      FUN_00495a5d();
      FUN_004914ad();
    }
  }
  else {
    if (iVar4 != 1) {
      *(int *)(param_1 + 0x240) = iVar4 + -1;
      if (iVar4 + -1 != 1) goto LAB_00496ab5;
      FUN_00491216();
    }
    FUN_00495a5d();
  }
  return;
}

