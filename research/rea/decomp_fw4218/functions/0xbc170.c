// rea decompile_all
// name: FUN_000bc170
// address: 0xbc170
// body: available
// range: 0xbc170-0xbc38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bc170(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint local_6c;
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [16];
  
  bVar1 = true;
  FUN_0013879c(auStack_48);
  FUN_002041e0(auStack_54);
  uVar2 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar2,s_SystemDataService_000bc38c,auStack_54);
  if (iVar3 == 0) {
    FUN_00002898(_DAT_000bc3a0);
    FUN_000d0510(auStack_54);
    uVar2 = FUN_001387a8(auStack_48);
  }
  else {
    if ((param_2 == 3) || (param_2 == 4)) {
      bVar1 = false;
    }
    piVar4 = (int *)FUN_0022bc9c(auStack_54);
    uVar2 = FUN_00201f28(auStack_3c,0);
    if (bVar1) {
      pcVar5 = s___sds___cne_AppSettings_Madi_Out_000bc3a2 + 2;
    }
    else {
      pcVar5 = s_sds___cne_AppSettings_Madi_Outpu_000bc3cc;
    }
    uVar2 = FUN_001aaf10(auStack_34,pcVar5,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0x20))(piVar4,uVar2,auStack_48);
    FUN_001aafac(auStack_34);
    FUN_00201f54(auStack_3c);
    if (iVar3 == 1) {
      for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        FUN_000028cc(auStack_68,s___Outgroup_02d__02d_000bc3f6 + 2,iVar3 << 3,iVar3 * 8 + 7);
        iVar6 = FUN_00200334(&local_6c,auStack_68,auStack_48);
        if (iVar6 == 0) {
          FUN_00002898(DAT_000bc40c,auStack_68);
        }
        if (bVar1) {
          if (local_6c < 3) {
            uVar2 = FUN_00178f04();
            FUN_00177b7c(uVar2,local_6c << 3,iVar3 << 3);
          }
          else {
            uVar2 = FUN_00178f04();
            FUN_00177be8(uVar2,(local_6c - 3) * 8,iVar3 << 3);
          }
        }
        else if (local_6c == 0) {
          uVar2 = FUN_00178f04();
          FUN_00177b7c(uVar2,local_6c << 3,iVar3 << 3);
        }
        else {
          uVar2 = FUN_00178f04();
          FUN_00177be8(uVar2,(local_6c - 1) * 8,iVar3 << 3);
        }
      }
      FUN_000d0510(auStack_54);
      uVar2 = FUN_001387a8(auStack_48);
    }
    else {
      FUN_00002898(_DAT_000bc3f4);
      FUN_000d0510(auStack_54);
      uVar2 = FUN_001387a8(auStack_48);
    }
  }
  return uVar2;
}

