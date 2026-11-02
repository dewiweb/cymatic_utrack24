// rea decompile_all
// name: FUN_001c0e80
// address: 0x1c0e80
// body: available
// range: 0x1c0e80-0x1c0f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c0e80(int *param_1,uint *param_2,int param_3,uint param_4,code *param_5)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_28;
  int *piStack_24;
  uint *local_20;
  int local_1c;
  uint uStack_18;
  
  if ((*(uint *)(*param_1 + 0x14) & param_4) == 0) {
    if ((*(uint *)(*param_1 + 0x10) & param_4) == 0) {
      iVar5 = *(int *)(DAT_001c0f80 + 8);
    }
    else {
      iVar5 = *(int *)(DAT_001c0f80 + 0xc);
    }
  }
  else {
    iVar5 = 0;
  }
  piStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  if (iVar5 != 0) {
    uVar6 = *param_2;
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      local_28 = 0;
      FUN_0020bb54(iVar5 + 8,uVar6 + 1,&local_28);
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 8) + uVar6 * 4);
    if (iVar7 != 0) goto LAB_001c0f6e;
  }
  if (local_1c == 0) {
    FUN_00173800(4);
  }
  if (iVar5 != 0) {
    uVar6 = *local_20;
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      local_28 = 0;
      FUN_0020bb54(iVar5 + 8,uVar6 + 1,&local_28);
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 8) + uVar6 * 4);
    if (iVar7 != 0) goto LAB_001c0f6e;
  }
  piVar3 = (int *)*param_1;
  uVar4 = 0;
  puVar1 = &DAT_001c0f84;
  if ((piVar3[5] & param_4) == 0) {
    if ((piVar3[4] & param_4) != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 2;
    uVar2 = 0x10;
    uVar6 = 0;
    do {
      if ((param_4 & uVar2) != 0) {
        puVar1 = *(undefined **)(*piVar3 + uVar6 * 4);
        goto LAB_001c0f38;
      }
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 << 1;
    } while (uVar6 < 6);
    puVar1 = &DAT_001c0f84;
  }
LAB_001c0f38:
  iVar7 = (*param_5)(uVar4,puVar1,0);
  if ((iVar5 != 0) && (*param_1 != iVar5)) {
    FUN_001c19ec(&local_28,iVar5);
    FUN_001c0f88(&local_28,iVar7,local_20);
    local_28 = 0;
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + -1;
    FUN_001c1a40(&local_28);
  }
LAB_001c0f6e:
  FUN_001c0f88(param_1,iVar7,local_20);
  return iVar7;
}

