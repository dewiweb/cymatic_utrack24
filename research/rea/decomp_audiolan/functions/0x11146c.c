// rea decompile_all
// name: FUN_0011146c
// address: 0x11146c
// body: available
// range: 0x11146c-0x1117ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011146c(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_30 [4];
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  byte local_28 [4];
  
  puVar2 = DAT_001117b0;
  uVar7 = 1 << (*(uint *)(param_1 + 4) & 0xff);
  if ((*DAT_001117ac & uVar7 & 0xff) == 0) {
    FUN_000028a4(DAT_001117b4);
    return 0xffffff36;
  }
  *DAT_001117b0 = ~uVar7 & 0xff & *DAT_001117b0 | *DAT_001117b0 & 0xffffff00;
  uVar8 = 0;
  uVar7 = 0;
  do {
    iVar5 = FUN_001606fc(param_2,uVar7);
    cVar1 = '\0';
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0xad);
    }
    if (iVar5 != 0 && cVar1 != '\0') {
      uVar8 = uVar8 | 1 << (uVar7 & 0xff);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  **(uint **)(param_1 + 0x18) = (uVar8 & 0xf) << 8 | **(uint **)(param_1 + 0x18) & 0xfffff0ff;
  **(uint **)(param_1 + 0x18) = **(uint **)(param_1 + 0x18) & 0xfffffff0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  FUN_0007b98c(auStack_30);
  local_2c = *(undefined1 *)(param_2 + 0xc);
  local_2b = *(undefined1 *)((int)param_2 + 0x31);
  local_2a = *(undefined1 *)((int)param_2 + 0x32);
  local_29 = *(undefined1 *)((int)param_2 + 0x33);
  iVar5 = FUN_00156078(auStack_30);
  if (iVar5 == 0xc) {
    FUN_000028a4(DAT_001117c0,*param_2);
    FUN_0007b9a4(auStack_30);
    return 0xffffff34;
  }
  iVar5 = FUN_0015ed04(param_1,auStack_30);
  pcVar3 = DAT_001117b8;
  if (iVar5 == 0) {
    FUN_000028a4(DAT_001117c4,*param_2);
    FUN_0007b9a4(auStack_30);
    return 0xffffff34;
  }
  cVar1 = *DAT_001117b8;
  iVar5 = 0;
  while( true ) {
    if (cVar1 == '\f') {
      FUN_000028a4(DAT_001117c8,*param_2);
      FUN_0007b9a4(auStack_30);
      return 0xffffff34;
    }
    uVar7 = FUN_00156078(auStack_30);
    if (uVar7 == (byte)pcVar3[iVar5 * 2]) break;
    iVar5 = iVar5 + 1;
    cVar1 = pcVar3[iVar5 * 2];
  }
  local_28[0] = pcVar3[iVar5 * 2 + 1];
  *(uint *)(*(int *)(param_1 + 0x18) + 8) =
       (local_28[0] & 0xf) << 6 | *(uint *)(*(int *)(param_1 + 0x18) + 8) & 0xfffffc3f;
  iVar5 = FUN_0015ee40(param_1,auStack_30,local_28);
  if (iVar5 == 0) {
    FUN_000028a4(DAT_001117cc,*param_2);
    FUN_0007b9a4(auStack_30);
    return 0xffffff34;
  }
  *(uint *)(*(int *)(param_1 + 0x18) + 8) =
       local_28[0] & 0x3f | *(uint *)(*(int *)(param_1 + 0x18) + 8) & 0xffffffc0;
  *(uint *)(*(int *)(param_1 + 0x18) + 8) = *(uint *)(*(int *)(param_1 + 0x18) + 8) | 0x30000;
  uVar7 = *(uint *)(*(int *)(param_1 + 0x18) + 8);
  if ((param_2[0x2f] & 0xff) == 0) {
    uVar7 = uVar7 & 0xfeffffff;
  }
  else {
    uVar7 = uVar7 | 0x1000000;
  }
  *(uint *)(*(int *)(param_1 + 0x18) + 8) = uVar7;
  uVar7 = *(uint *)(*(int *)(param_1 + 0x18) + 8);
  if ((param_2[0x38] & 0xff) == 0) {
    uVar7 = uVar7 & 0xefffffff;
  }
  else {
    uVar7 = uVar7 | 0x10000000;
  }
  *(uint *)(*(int *)(param_1 + 0x18) + 8) = uVar7;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = 0;
  *(uint *)(*(int *)(param_1 + 0x18) + 0xc) =
       *(uint *)(*(int *)(param_1 + 0x18) + 0xc) & 0xfffffeff |
       (*(byte *)((int)param_2 + 0x75) ^ 1) << 8;
  puVar4 = DAT_001117bc;
  uVar7 = 0;
  piVar6 = (int *)*DAT_001117bc;
  if ((int *)DAT_001117bc[1] != piVar6) {
    do {
      if (0 < *(short *)((undefined4 *)*piVar6 + 1)) {
        uVar8 = FUN_00154ddc(*(undefined4 *)*piVar6);
        uVar7 = uVar7 | 1 << (uVar8 & 0xff);
      }
      piVar6 = piVar6 + 1;
    } while ((int *)puVar4[1] != piVar6);
  }
  puVar2[0x40] = uVar7;
  if (*(int *)(param_1 + 0x10) != 0) {
    *puVar2 = (*puVar2 | 1 << (*(uint *)(param_1 + 4) & 0xff)) & 0xff | *puVar2 & 0xffffff00;
  }
  FUN_0007b9a4(auStack_30);
  return 0;
}

