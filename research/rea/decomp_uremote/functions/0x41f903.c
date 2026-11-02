// rea decompile_all
// name: FUN_0041f903
// address: 0x41f903
// body: available
// range: 0x41f766-0x41f887 inclusive
// range: 0x41f903-0x41f9d9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f9c3 to 0x4f8947 FUN_004f8947 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041f903(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar5 = (int *)*param_2;
  psVar4 = (short *)param_2[1];
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0x60;
  }
  if (psVar4 != (short *)0x0) {
    if ((psVar4[1] == 0) || (*psVar4 < 1)) {
      return 0;
    }
    if (((*(int *)(psVar4 + 6) != 0) && (*(int *)(psVar4 + 2) != 0)) &&
       ((int)psVar4[1] == *(short *)(*(int *)(psVar4 + 6) + -2 + *psVar4 * 2) + 1)) {
      iVar2 = param_1[3];
      if ((*(byte *)(param_2 + 2) & 2) != 0) {
        return 0x13;
      }
      if (piVar5 != (int *)0x0) {
        if (piVar5[1] == 0) {
          return 0;
        }
        if (*piVar5 == 0) {
          return 0;
        }
        if (piVar5[3] != 0) {
          puVar6 = (undefined4 *)(iVar2 + 0x80);
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *(undefined4 *)psVar4;
            psVar4 = psVar4 + 2;
            puVar6 = puVar6 + 1;
          }
          piVar7 = (int *)(iVar2 + 0x68);
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          }
          iVar3 = *param_1;
          *(int *)(iVar2 + 0x1c) = iVar3;
          *(uint *)(iVar2 + 0x20) = iVar3 + (param_1[1] & 0xfffffffcU);
          if ((*(byte *)(param_2 + 2) & 1) != 0) {
            iVar2 = FUN_004f8947();
            return iVar2;
          }
          FUN_0041e00c(*(uint *)(iVar2 + 0x90) & 0x100);
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0xc);
          uVar1 = *(uint *)(iVar2 + 0x90);
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 0x10) == 0) {
              *(undefined1 *)(iVar2 + 0xb4) = 0;
            }
            else {
              *(undefined1 *)(iVar2 + 0xb4) = 4;
            }
            if ((uVar1 & 0x20) == 0) {
              *(char *)(iVar2 + 0xb4) = *(char *)(iVar2 + 0xb4) + '\x01';
            }
          }
          else {
            *(undefined1 *)(iVar2 + 0xb4) = 2;
          }
          *(byte *)(iVar2 + 0xb5) = ~(byte)(uVar1 >> 9) & 1;
          *(undefined2 *)(iVar2 + 0x3c0) = 0;
          *(short *)(iVar2 + 0x3c2) = *(short *)(iVar2 + 0x68) + -1;
          *(undefined2 *)(iVar2 + 0x38) = *(undefined2 *)(iVar2 + 0x6c);
          *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x74);
          *(undefined1 **)(iVar2 + 0xa4) = &LAB_0041ef2e;
          *(code **)(iVar2 + 0xa8) = FUN_0041ef78;
          *(code **)(iVar2 + 0xac) = FUN_0041f049;
          *(undefined1 **)(iVar2 + 0xb0) = &LAB_0041f1b9;
          *(undefined4 *)(iVar2 + 0x400) = 0;
          iVar3 = FUN_0041f665(0);
          if (iVar3 == 0) {
            if ((*(char *)(iVar2 + 0xb5) != '\0') && (*(char *)(iVar2 + 0xb4) != '\x02')) {
              *(undefined2 *)(iVar2 + 0x3c0) = 0;
              *(short *)(iVar2 + 0x3c2) = *(short *)(iVar2 + 0x6c) + -1;
              *(code **)(iVar2 + 0xa4) = FUN_0041f3a2;
              *(code **)(iVar2 + 0xa8) = FUN_0041f1cb;
              *(code **)(iVar2 + 0xac) = FUN_0041f237;
              *(code **)(iVar2 + 0xb0) = FUN_0041f3a2;
              *(undefined4 *)(iVar2 + 0x400) = 0;
              iVar2 = FUN_0041f665(1);
              if (iVar2 != 0) {
                return iVar2;
              }
            }
            iVar3 = 0;
          }
          return iVar3;
        }
      }
    }
  }
  return 0x14;
}

