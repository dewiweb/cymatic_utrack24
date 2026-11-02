// rea decompile_all
// name: FUN_0008791c
// address: 0x8791c
// body: available
// range: 0x8791c-0x87a05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008791c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_40 [4];
  int *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined1 auStack_28 [8];
  int local_20;
  int iStack_1c;
  int local_18;
  
  uVar7 = 0;
  if (*(char *)(param_2 + 4) != '\0') {
    do {
      uVar7 = uVar7 + 1 & 0xff;
    } while (*(char *)(uVar7 * 0xc + param_2 + 4) != '\0');
    iVar6 = 0;
    if (uVar7 != 0) {
      iVar2 = param_1 + DAT_00087a08;
      local_20 = param_1;
      iStack_1c = param_2;
      local_18 = param_3;
      do {
        iVar3 = FUN_001f01c4(0x58,1);
        if ((iVar3 == 0) ||
           (piVar4 = (int *)FUN_0006c814(iVar3,local_20,*(undefined1 *)(iVar6 * 0xc + param_2 + 4),
                                         *(undefined4 *)(param_2 + iVar6 * 0xc)),
           piVar4 == (int *)0x0)) {
          FUN_00002898(DAT_00087a0c,*(undefined1 *)(iVar6 * 0xc + param_2 + 4));
          return 0;
        }
        iVar3 = FUN_0006c2ac();
        if (iVar3 == 0) {
          uVar1 = *(undefined1 *)(iVar6 * 0xc + param_2 + 4);
          uVar5 = DAT_00087a10;
LAB_000879f0:
          FUN_00002898(uVar5,uVar1);
          (**(code **)(*piVar4 + 4))(piVar4);
          return 0;
        }
        local_34 = local_18;
        local_30 = (uint)*(byte *)(piVar4 + 1);
        iVar3 = FUN_00086788(local_20,local_30,local_18);
        if (iVar3 == 0) {
          FUN_00002898(DAT_00087a14);
          uVar1 = *(undefined1 *)(iVar6 * 0xc + param_2 + 4);
          uVar5 = DAT_00087a18;
          goto LAB_000879f0;
        }
        local_38 = (uint)piVar4 & 0xffffff00 | 1;
        local_40[0] = (undefined1)local_30;
        iVar3 = param_1 + 0x8a0;
        if (local_34 != 2) {
          iVar3 = iVar2;
        }
        local_3c = piVar4;
        FUN_002338a8(auStack_28,iVar3,local_40);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar7);
    }
  }
  return 1;
}

