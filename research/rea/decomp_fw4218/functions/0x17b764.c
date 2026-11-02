// rea decompile_all
// name: FUN_0017b764
// address: 0x17b764
// body: available
// range: 0x17b764-0x17b8e3 inclusive
// range: 0x17bcd8-0x17bcff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0017b764(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_30 [4];
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if ((*DAT_0017be8c & 1 << (*(uint *)(param_1 + 4) & 0xff) & 0xffU) == 0) {
    FUN_00002898(DAT_0017be98);
    return 0xffffff36;
  }
  uVar4 = *param_2;
  uVar1 = FUN_0012b194();
  FUN_0012b154(uVar1,uVar4,1);
  *DAT_0017be90 =
       *DAT_0017be90 & ~(1 << (*(uint *)(param_1 + 4) & 0xff)) & 0xffU | *DAT_0017be90 & 0xffffff00;
  **(uint **)(param_1 + 0x18) = **(uint **)(param_1 + 0x18) & 0xfffff0ff;
  iVar2 = FUN_001bf394(param_1,param_2,param_3);
  iVar3 = DAT_0017be94;
  if ((iVar2 == 0) || (iVar2 = DAT_0017be94, (*(uint *)(*(int *)(param_1 + 0x18) + 4) & 1) == 0)) {
LAB_0017b848:
    **(uint **)(param_1 + 0x18) = **(uint **)(param_1 + 0x18) & 0xfffffff0;
    iVar2 = FUN_001bf394(param_1,param_2,param_3);
    if ((iVar2 == 0) || ((*(uint *)(*(int *)(param_1 + 0x18) + 4) & 1) == 0)) {
LAB_0017b8a8:
      FUN_0007bce8(auStack_30);
      local_2c = *(undefined1 *)(param_2 + 0xc);
      local_2b = *(undefined1 *)((int)param_2 + 0x31);
      local_2a = *(undefined1 *)((int)param_2 + 0x32);
      local_29 = *(undefined1 *)((int)param_2 + 0x33);
      uVar1 = FUN_001b40a0(auStack_30);
      switch(uVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        uVar1 = FUN_001b40a0(auStack_30);
        FUN_00002898(DAT_0017beb0,uVar1);
        FUN_0007bd00(auStack_30);
        return 0xffffff34;
      }
    }
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x18) + 4) & 1) == 0) goto LAB_0017b8a8;
      bVar5 = -1 < iVar3;
      iVar3 = iVar3 + -1;
    } while (bVar5);
  }
  else {
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x18) + 4) & 1) == 0) goto LAB_0017b848;
      bVar5 = -1 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar5);
  }
  return 0xffffff35;
}

