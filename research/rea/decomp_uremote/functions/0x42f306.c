// rea decompile_all
// name: FUN_0042f306
// address: 0x42f306
// body: available
// range: 0x42f306-0x42f442 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f306(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_114 [48];
  undefined4 local_54 [12];
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar1 = param_2;
  local_8 = 0;
  (*(code *)param_2[0xf])(param_2,local_114,0x10,&local_10);
  if (local_10 < 0) {
    local_8 = 0xa2;
  }
  else if ((local_10 == 0) || (0x10 < local_10)) {
LAB_0042f431:
    local_8 = 3;
  }
  else {
    local_1c = *param_2;
    local_20 = param_2[2];
    local_14 = *(int *)(param_1 + 0x214);
    local_18 = 0;
    param_2 = (undefined4 *)0x0;
    if (0 < local_10) {
      do {
        iVar3 = 0;
        uVar2 = local_114[(int)param_2 * 3];
        puVar1[2] = local_114[(int)param_2 * 3 + 1];
        *puVar1 = uVar2;
        (*(code *)puVar1[0xf])(puVar1,local_54,4,&local_c);
        if (param_2 == (undefined4 *)0x0) {
          if ((local_c < 1) || (4 < local_c)) goto LAB_0042f431;
          local_18 = local_c;
          local_8 = FUN_0042e9fc(param_1,local_c);
          if (local_8 != 0) goto LAB_0042f438;
          local_14 = *(int *)(param_1 + 0x214);
        }
        else if (local_c != local_18) goto LAB_0042f431;
        if (0 < local_c) {
          local_24 = (int *)(local_14 + 0x18 + (int)param_2 * 4);
          puVar4 = local_54;
          do {
            *puVar1 = *puVar4;
            puVar1[2] = puVar4[1];
            uVar2 = (*(code *)puVar1[10])(puVar1,0);
            *(undefined4 *)(*local_24 + iVar3 * 4) = uVar2;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 3;
          } while (iVar3 < local_c);
        }
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while ((int)param_2 < local_10);
    }
    *puVar1 = local_1c;
    puVar1[2] = local_20;
  }
LAB_0042f438:
  puVar1[3] = local_8;
  return;
}

