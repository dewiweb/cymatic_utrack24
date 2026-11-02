// rea decompile_all
// name: FUN_00004b34
// address: 0x4b34
// body: available
// range: 0x4b34-0x4c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00004b34(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c [4];
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  puVar7 = (undefined2 *)0x0;
  uVar2 = param_3[1];
  iVar6 = 0;
  local_40 = param_3[2];
  bVar1 = false;
  local_34 = 0;
  local_30 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar3 = (*(code *)param_3[6])(param_2);
  if (local_18 == 0 && param_5 == 0) {
    while (iVar5 = (*(code *)param_3[8])(uVar3), iVar5 != 0) {
      iVar6 = iVar6 + 1;
      uVar3 = (*(code *)param_3[6])(local_20);
    }
  }
  if (uVar3 == 0xffffffff) {
    iVar6 = -1;
  }
  else {
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined4 *)*param_3;
      *param_3 = puVar4 + 1;
      puVar7 = (undefined2 *)*puVar4;
    }
    while ((0 < local_40 && (uVar3 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_5 == 0) && (iVar5 = (*(code *)param_3[8])(uVar3), iVar5 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)((int)uVar3 >> 0x1f) >> 0x1b) + uVar3) >> 5) * 4 + local_18)
               & 1 << ((int)uVar3 % 0x20 & 0xffU)) == 0) break;
      iVar5 = FUN_00004ebc(local_2c,uVar3 & 0xff,&local_34);
      if (iVar5 == -1) {
        (*(code *)param_3[7])(local_20);
        goto LAB_00004c44;
      }
      if (iVar5 == -2) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
        if ((uVar2 & 1) == 0) {
          *puVar7 = local_2c[0];
          puVar7 = puVar7 + 1;
        }
        local_40 = local_40 + -1;
      }
      iVar6 = iVar6 + 1;
      uVar3 = (*(code *)param_3[6])(local_20);
    }
    (*(code *)param_3[7])(local_20);
    if (!bVar1) {
      if ((uVar2 & 1) == 0 && param_5 == 0) {
        *puVar7 = 0;
      }
      if (local_40 < (int)param_3[2]) {
        if (param_5 == 0) {
          return iVar6;
        }
        if (local_40 == 0) {
          return iVar6;
        }
      }
    }
LAB_00004c44:
    iVar6 = -2;
  }
  return iVar6;
}

