// rea decompile_all
// name: FUN_00074d50
// address: 0x74d50
// body: available
// range: 0x74d50-0x74ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00074d50(uint param_1,int param_2)

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
  
  FUN_00074f7c(param_1,1);
  FUN_00074910(param_1,&local_48);
  FUN_00002898(&DAT_00074ec8);
  FUN_00002898(s_lookup_ram_of_DMA___d__d_00074ecc,local_48 >> 0x10,local_48 & 0xffff);
  piVar1 = DAT_00074ee8;
  iVar2 = *DAT_00074ee8 + (param_1 >> 5) * 4;
  uVar7 = 1 << (param_1 + (param_1 >> 5) * -0x20 & 0xff);
  if ((*(uint *)(DAT_00074eec + iVar2) & uVar7) == 0) {
    pcVar4 = s_Not_Full_00074ef8;
  }
  else {
    pcVar4 = &DAT_00074ef0;
  }
  if ((*(uint *)(iVar2 + 0x2800) & uVar7) == 0) {
    pcVar3 = s_Not_Empty_00074f0c;
  }
  else {
    pcVar3 = s_Empty_00074f04;
  }
  FUN_00002898(s_Status___s____s_00074f18,pcVar3,pcVar4);
  uVar7 = 0;
  iVar2 = FUN_00074594(param_1,auStack_44);
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
    uVar5 = _DAT_00074f2c;
    if (3 < uVar7) goto LAB_00074e5c;
  }
  local_40[3] = *(undefined4 *)(s___x___DMA_belongs_to_Group___d___00074f2e._2_4_ + 0xc);
  local_40[0] = *(undefined4 *)s___x___DMA_belongs_to_Group___d___00074f2e._2_4_;
  local_40[1] = *(undefined4 *)(s___x___DMA_belongs_to_Group___d___00074f2e._2_4_ + 4);
  local_40[2] = *(undefined4 *)(s___x___DMA_belongs_to_Group___d___00074f2e._2_4_ + 8);
  uVar5 = local_40[uVar7];
LAB_00074e5c:
  FUN_00002898(s___x___DMA_belongs_to_Group___d___00074f2e + 6,uVar7,uVar5);
  FUN_00002898(s_IRQ_status_of_group___x___00074f54,uVar6);
  iVar2 = DAT_00074f70;
  if (uVar6 == 0) {
    FUN_00002898(DAT_00074f78);
  }
  else {
    iVar8 = 0;
    uVar7 = 0;
    do {
      if ((uVar6 & 1 << (uVar7 & 0xff)) != 0) {
        FUN_00002898(DAT_00074f74,*(undefined4 *)(iVar2 + iVar8 * 4));
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 1;
    } while ((int)uVar7 < 0xf);
  }
  FUN_00002898(s___x___DMA_belongs_to_Group___d___00074f2e + 0x22);
  return;
}

