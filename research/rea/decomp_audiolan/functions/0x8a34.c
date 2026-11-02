// rea decompile_all
// name: FUN_00008a34
// address: 0x8a34
// body: available
// range: 0x8a34-0x8c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00008a84) */
/* WARNING: Removing unreachable block (ram,0x00008c28) */
/* WARNING: Removing unreachable block (ram,0x00008c24) */
/* WARNING: Removing unreachable block (ram,0x00008c44) */
/* WARNING: Removing unreachable block (ram,0x00008a88) */

void FUN_00008a34(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_38;
  int *local_34 [2];
  int iStack_2c;
  int *piStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iStack_2c = param_1;
  piStack_28 = param_2;
  local_24 = param_3;
  uStack_20 = param_4;
  FUN_001a0700(param_1 + 0x118);
  FUN_001dbcd8(&local_38,param_1 + 0x15c,&local_24);
  if (local_38 != *(int *)(param_1 + 0x16c)) {
    (**(code **)(*param_2 + 0x198))(param_2);
    FUN_00008324(param_1,local_38 + 0x14,param_2 + 1);
    puVar6 = *(undefined4 **)(local_38 + 0x2c);
    for (puVar1 = *(undefined4 **)(local_38 + 0x28); puVar6 != puVar1; puVar1 = puVar1 + 1) {
      if ((int *)*puVar1 == param_2) {
        if (*(undefined4 **)(local_38 + 0x28) != puVar6) {
          puVar4 = puVar1 + 1;
          if (puVar4 != puVar6) {
            iVar3 = (int)puVar6 - (int)puVar4 >> 2;
            if (0 < iVar3) {
              iVar5 = 0;
              if (puVar4 < puVar6) {
                iVar7 = -(((int)puVar6 - (int)puVar4) * 0x20000000 >> 0x1f);
                if (iVar7 == 1) {
                  iVar5 = 1;
                  *puVar1 = *puVar4;
                }
              }
              else {
                iVar7 = 0;
              }
              for (; iVar7 < iVar3; iVar7 = iVar7 + 2) {
                puVar1[iVar5] = puVar4[iVar5];
                puVar1[iVar5 + 1] = puVar4[iVar5 + 1];
                iVar5 = iVar5 + 2;
              }
            }
          }
          *(int *)(local_38 + 0x2c) = *(int *)(local_38 + 0x2c) + -4;
        }
        break;
      }
    }
    FUN_000080b4(param_1,local_24);
    piVar2 = (int *)FUN_001dbd40(param_1 + 0x15c,&uStack_20);
    local_34[0] = param_2;
    FUN_001deee0(piVar2 + 5,local_34);
    (**(code **)(*param_2 + 0x19c))(param_2);
    if (((((char)param_2[9] == '\x02') && (*piVar2 != 0)) && (*(char *)(*piVar2 + 0x20) == '\x03'))
       && (iVar3 = FUN_000072f0(param_1,piVar2,param_2 + 1), iVar3 != 0)) {
      param_2 = param_2 + 1;
      iVar3 = (**(code **)*param_2)(param_2,*piVar2,(int)(char)piVar2[0xb]);
      if (iVar3 != 0) {
        (**(code **)(*param_2 + 4))(param_2);
      }
    }
  }
  FUN_001a0d18(param_1 + 0x118);
  return;
}

