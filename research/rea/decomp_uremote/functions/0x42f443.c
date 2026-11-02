// rea decompile_all
// name: FUN_0042f443
// address: 0x42f443
// body: available
// range: 0x42f443-0x42f59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f443(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_140 [60];
  int local_50 [12];
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar1 = param_2;
  iVar2 = param_1;
  local_18 = *(undefined4 *)(param_1 + 100);
  (*(code *)param_2[0xf])(param_2,local_50,4,&local_14);
  if (local_14 < 0) {
    param_1 = 0xa2;
  }
  else if ((local_14 == 0) || (4 < local_14)) {
LAB_0042f58e:
    param_1 = 3;
  }
  else {
    local_20 = *piVar1;
    local_1c = piVar1[2];
    param_1 = FUN_0042e9fc(iVar2,local_14);
    if (param_1 == 0) {
      local_c = 0;
      if (0 < local_14) {
        local_8 = local_50;
        piVar5 = (int *)(*(int *)(iVar2 + 0x214) + 0x60);
        do {
          iVar2 = *local_8;
          piVar1[2] = local_8[1];
          *piVar1 = iVar2;
          (*(code *)piVar1[0xf])(piVar1,local_140,0x14,&local_10);
          if ((local_10 < 1) || (0x14 < local_10)) goto LAB_0042f58e;
          iVar4 = 0;
          iVar2 = FUN_00411976(4,0,&param_1);
          piVar5[-1] = iVar2;
          if (param_1 != 0) goto LAB_0042f595;
          *piVar5 = iVar2 + local_10 * 4;
          *(char *)(piVar5 + -2) = (char)local_10;
          if (0 < local_10) {
            param_2 = local_140;
            do {
              iVar2 = param_2[1];
              *piVar1 = *param_2 + 1;
              piVar1[2] = iVar2 + -1;
              uVar3 = (*(code *)piVar1[9])(piVar1);
              *(undefined4 *)(piVar5[-1] + iVar4 * 4) = uVar3;
              uVar3 = (*(code *)piVar1[10])(piVar1,0);
              param_2 = param_2 + 3;
              *(undefined4 *)(*piVar5 + iVar4 * 4) = uVar3;
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_10);
          }
          local_c = local_c + 1;
          local_8 = local_8 + 3;
          piVar5 = piVar5 + 3;
        } while (local_c < local_14);
      }
      *piVar1 = local_20;
      piVar1[2] = local_1c;
    }
  }
LAB_0042f595:
  piVar1[3] = param_1;
  return;
}

