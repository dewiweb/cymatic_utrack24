// rea decompile_all
// name: FUN_000bef90
// address: 0xbef90
// body: available
// range: 0xbef90-0xbf137 inclusive
// range: 0xbf250-0xbf267 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bef90(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  
  bVar1 = true;
  iVar2 = FUN_00041c14(s__cfg_AppSettings_SAP_000bf138,&local_20);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_000bf268,s__cfg_AppSettings_SAP_000bf138);
  }
  else {
    local_1c = _DAT_000bf150;
    iVar2 = FUN_00042a00(local_20,s_I_MulticastAddress_000bf152 + 2,&local_1c);
    if (iVar2 == 0) {
      FUN_000028a4(s__ERROR__RavennaConfiguration__Lo_000bf16b + 1,s_I_MulticastAddress_000bf152 + 2
                  );
      bVar1 = false;
    }
    else {
      iVar2 = FUN_000bc20c(local_1c);
      if (iVar2 == 0) {
        FUN_000028a4(_DAT_000bf168,local_1c);
        bVar1 = false;
      }
      else {
        FUN_001da4a8(param_1 + 0x254,&local_1c);
      }
    }
    FUN_001da314(&local_1c);
    iVar2 = FUN_00048ef8(local_20,&DAT_000bf1a8,&local_14);
    if (iVar2 == 0) {
      FUN_000028a4(s__ERROR__RavennaConfiguration__Lo_000bf16b + 1,&DAT_000bf1a8);
      bVar1 = false;
    }
    else if (local_14 - 1U < DAT_000bf1b0) {
      *(short *)(param_1 + 600) = (short)local_14;
    }
    else {
      FUN_000028a4(s_ERROR__RavennaConfiguration__Loa_000bf1b4);
      bVar1 = false;
    }
    iVar2 = FUN_00043278(local_20,s_AnnouncementEnabled_000bf1ec,param_1 + 0x25c);
    if (iVar2 == 0) {
      FUN_000028a4(s__ERROR__RavennaConfiguration__Lo_000bf16b + 1,s_AnnouncementEnabled_000bf1ec);
      bVar1 = false;
    }
    iVar2 = FUN_00043278(local_20,s_BrowsingEnabled_000bf200,param_1 + 0x25d);
    if (iVar2 == 0) {
      FUN_000028a4(s__ERROR__RavennaConfiguration__Lo_000bf16b + 1,s_BrowsingEnabled_000bf200);
      bVar1 = false;
    }
    iVar2 = FUN_00048ef8(local_20,s_SessionTimeoutSeconds_000bf210,&local_18);
    if (iVar2 == 0) {
      FUN_000028a4(s_ERROR__SAPService__Could_not_get_000bf228,s_SessionTimeoutSeconds_000bf210);
      FUN_00041dd4(local_20);
    }
    else {
      if (local_18 < 0x3c) {
        local_18 = 0x3c;
      }
      else if (0xe10 < local_18) {
        local_18 = 0xe10;
      }
      *(short *)(param_1 + 0x25a) = (short)local_18;
      FUN_00041dd4(local_20);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}

