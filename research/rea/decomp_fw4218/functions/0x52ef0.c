// rea decompile_all
// name: FUN_00052ef0
// address: 0x52ef0
// body: available
// range: 0x52ef0-0x5307b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00052ef0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *local_28;
  
  *param_4 = 0;
  local_28 = param_4;
  do {
    while (iVar1 = FUN_00054138(param_1,param_2,param_4,&local_28), iVar1 != 0) {
      piVar2 = (int *)param_3[4];
      piVar4 = (int *)*piVar2;
      if ((int *)*piVar2 != piVar2) {
        do {
          piVar7 = (int *)*piVar4;
          iVar3 = (**(code **)(*(int *)piVar4[2] + 8))((int *)piVar4[2],iVar1);
          piVar2 = (int *)0x0;
          if (iVar3 != 0) {
            piVar2 = (int *)param_3[4];
          }
          if (iVar3 != 0 && piVar4 != piVar2) {
            *(int *)piVar4[1] = *piVar4;
            *(int *)(*piVar4 + 4) = piVar4[1];
            param_3[5] = param_3[5] + -1;
            *piVar4 = param_3[1];
            param_3[1] = (int)piVar4;
          }
          piVar2 = (int *)param_3[4];
          piVar4 = piVar7;
        } while (piVar7 != piVar2);
      }
      piVar4 = (int *)param_3[1];
      if (piVar4 == (int *)0x0) {
        if (param_3[2] == param_3[3]) {
          uVar6 = 1;
          if (*param_3 != 0) {
            uVar5 = *(uint *)(*param_3 + 4);
            uVar6 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar6 < uVar5 + 1) {
              uVar6 = uVar5 + 1;
            }
          }
          piVar4 = (int *)FUN_00173860(0xc,0);
          iVar3 = FUN_00173860(uVar6 * 0xc,0);
          piVar4[2] = iVar3;
          *piVar4 = *param_3;
          piVar4[1] = uVar6;
          *param_3 = (int)piVar4;
          iVar3 = piVar4[2];
          param_3[2] = iVar3;
          param_3[3] = iVar3 + uVar6 * 0xc;
        }
        piVar4 = (int *)param_3[2];
        param_3[2] = (int)(piVar4 + 3);
      }
      else {
        param_3[1] = *piVar4;
      }
      if (piVar4 + 2 != (int *)0x0) {
        piVar4[2] = iVar1;
      }
      *piVar4 = (int)piVar2;
      piVar4[1] = piVar2[1];
      *(int **)piVar2[1] = piVar4;
      piVar2[1] = (int)piVar4;
      param_3[5] = param_3[5] + 1;
    }
  } while ((char)local_28 != '\0');
  return;
}

