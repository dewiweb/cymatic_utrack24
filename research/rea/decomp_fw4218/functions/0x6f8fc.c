// rea decompile_all
// name: FUN_0006f8fc
// address: 0x6f8fc
// body: available
// range: 0x6f8fc-0x6f9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006f8fc(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_cc [10];
  short local_c2;
  undefined2 *local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [128];
  undefined1 auStack_18 [8];
  
  piVar1 = (int *)FUN_000d6fe4(*DAT_0006f9f8);
  if (piVar1 == (int *)0x0) {
    FUN_00002898(s_ERROR__no_filesystem_available_0006fa20);
  }
  else {
    FUN_00231ef4(&local_a0,&DAT_0006f9fc,auStack_18);
    if (param_3 != 0) {
      FUN_000033f4(auStack_98,*param_2,0x40);
      iVar2 = FUN_000038be(auStack_98);
      if (iVar2 == 0) {
        if (*(int *)(local_a0 + -6) == 0) {
          *(undefined4 *)(local_a0 + -2) = 0;
          *local_a0 = 0;
        }
        else {
          FUN_00231ebc(&local_a0);
          local_a0 = _DAT_0006fa40;
        }
      }
      else {
        FUN_0023181c(&local_a0,0,*(undefined4 *)(local_a0 + -2),auStack_98,iVar2,0,iVar2);
      }
    }
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,&local_9c,&local_a0);
    if (iVar2 == 0) {
      FUN_001a7134(auStack_cc);
      FUN_00002898(s_iI_Directory_Listing_of___ls_0006fa41 + 3,local_a0);
      FUN_00002898(DAT_0006fa60);
      FUN_00002898(DAT_0006fa60 + 0x44);
      while ((iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,local_9c,auStack_cc), iVar2 == 0 &&
             (local_c2 != 0))) {
        FUN_0004758c(auStack_cc);
      }
      FUN_00002898(DAT_0006fa60 + 0x44);
      (**(code **)(*piVar1 + 0xc))(piVar1,local_9c);
      FUN_001a714e(auStack_cc);
    }
    else {
      uVar3 = FUN_00048e68();
      FUN_00002898(s_ERROR__opendir_returned__d___s_0006fa00,iVar2,uVar3);
    }
    FUN_00231ebc(&local_a0);
  }
  return 0;
}

