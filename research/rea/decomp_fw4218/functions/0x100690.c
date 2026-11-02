// rea decompile_all
// name: FUN_00100690
// address: 0x100690
// body: available
// range: 0x100690-0x100837 inclusive
// range: 0x100950-0x100967 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00100690(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  char local_1c [4];
  uint local_18;
  int local_14;
  
  bVar1 = true;
  iVar2 = FUN_000466b0(s__cfg_AppSettings_SAP_00100838,&local_20);
  if (iVar2 == 0) {
    FUN_00002898(DAT_00100968,s__cfg_AppSettings_SAP_00100838);
  }
  else {
    local_1c[0] = s_iI_MulticastAddress_00100850[0];
    local_1c[1] = s_iI_MulticastAddress_00100850[1];
    local_1c[2] = s_iI_MulticastAddress_00100850[2];
    local_1c[3] = s_iI_MulticastAddress_00100850[3];
    iVar2 = FUN_00048bd4(local_20,s_iI_MulticastAddress_00100850 + 4,local_1c);
    if (iVar2 == 0) {
      FUN_00002898(s___ERROR__RavennaConfiguration__L_0010086a + 2,
                   s_iI_MulticastAddress_00100850 + 4);
      bVar1 = false;
    }
    else {
      iVar2 = FUN_000fe4f0(local_1c);
      if (iVar2 == 0) {
        FUN_00002898(_DAT_00100868,local_1c);
        bVar1 = false;
      }
      else {
        FUN_00232a4c(param_1 + 600,local_1c);
      }
    }
    FUN_00232920(local_1c);
    iVar2 = FUN_0004febc(local_20,&DAT_001008a8,&local_14);
    if (iVar2 == 0) {
      FUN_00002898(s___ERROR__RavennaConfiguration__L_0010086a + 2,&DAT_001008a8);
      bVar1 = false;
    }
    else if (local_14 - 1U < DAT_001008b0) {
      *(short *)(param_1 + 0x25c) = (short)local_14;
    }
    else {
      FUN_00002898(s_ERROR__RavennaConfiguration__Loa_001008b4);
      bVar1 = false;
    }
    iVar2 = FUN_00049674(local_20,s_AnnouncementEnabled_001008ec,param_1 + 0x260);
    if (iVar2 == 0) {
      FUN_00002898(s___ERROR__RavennaConfiguration__L_0010086a + 2,s_AnnouncementEnabled_001008ec);
      bVar1 = false;
    }
    iVar2 = FUN_00049674(local_20,s_BrowsingEnabled_00100900,param_1 + 0x261);
    if (iVar2 == 0) {
      FUN_00002898(s___ERROR__RavennaConfiguration__L_0010086a + 2,s_BrowsingEnabled_00100900);
      bVar1 = false;
    }
    iVar2 = FUN_0004febc(local_20,s_SessionTimeoutSeconds_00100910,&local_18);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__SAPService__Could_not_get_00100928,s_SessionTimeoutSeconds_00100910);
      FUN_00046b8c(local_20);
    }
    else {
      if (local_18 < 0x3c) {
        local_18 = 0x3c;
      }
      else if (0xe10 < local_18) {
        local_18 = 0xe10;
      }
      *(short *)(param_1 + 0x25e) = (short)local_18;
      FUN_00046b8c(local_20);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}

