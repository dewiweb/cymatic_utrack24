// rea decompile_all
// name: FUN_00073f14
// address: 0x73f14
// body: available
// range: 0x73f14-0x7408b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00073f14(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40 [8];
  uint local_20;
  
  FUN_00074140(param_1,1);
  FUN_00073ad4(param_1,&local_48);
  FUN_000028a4(&DAT_0007408c);
  FUN_000028a4(s_lookup_ram_of_DMA___d__d_00074090,local_48 >> 0x10,local_48 & 0xffff);
  piVar1 = DAT_000740ac;
  iVar2 = *DAT_000740ac + (param_1 >> 5) * 4;
  uVar7 = 1 << (param_1 + (param_1 >> 5) * -0x20 & 0xff);
  if ((*(uint *)(DAT_000740b0 + iVar2) & uVar7) == 0) {
    pcVar4 = s_Not_Full_000740bc;
  }
  else {
    pcVar4 = &DAT_000740b4;
  }
  if ((*(uint *)(iVar2 + 0x2800) & uVar7) == 0) {
    pcVar3 = s_Not_Empty_000740d0;
  }
  else {
    pcVar3 = s_Empty_000740c8;
  }
  FUN_000028a4(s_Status___s____s_000740dc,pcVar3,pcVar4);
  uVar7 = 0;
  iVar2 = FUN_00073758(param_1,auStack_44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = local_20 >> 0x1e;
    iVar2 = *piVar1 + uVar7 * 0x10;
    if (param_2 != 0) {
      *(uint *)(*piVar1 + 0x10cc) = param_1;
      *(undefined4 *)(&DAT_00001c04 + iVar2) = 0xffffffff;
    }
    uVar6 = *(uint *)(iVar2 + 0x1c00);
    uVar5 = DAT_000740f0;
    if (3 < uVar7) goto LAB_00074020;
  }
  local_40[3] = _DAT_000740f4[3];
  local_40[0] = *_DAT_000740f4;
  local_40[1] = _DAT_000740f4[1];
  local_40[2] = _DAT_000740f4[2];
  uVar5 = local_40[uVar7];
LAB_00074020:
  FUN_000028a4(s___DMA_belongs_to_Group___d___s__000740f6 + 2,uVar7,uVar5);
  FUN_000028a4(s_IRQ_status_of_group___x___00074118,uVar6);
  iVar2 = DAT_00074134;
  if (uVar6 == 0) {
    FUN_000028a4(DAT_0007413c);
  }
  else {
    iVar8 = 0;
    uVar7 = 0;
    do {
      if ((uVar6 & 1 << (uVar7 & 0xff)) != 0) {
        FUN_000028a4(DAT_00074138,*(undefined4 *)(iVar2 + iVar8 * 4));
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 1;
    } while ((int)uVar7 < 0xf);
  }
  FUN_000028a4(s___DMA_belongs_to_Group___d___s__000740f6 + 0x1e);
  return;
}

