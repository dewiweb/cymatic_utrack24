// rea decompile_all
// name: FUN_0001984c
// address: 0x1984c
// body: available
// range: 0x1984c-0x19aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001984c(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_1a8 [32];
  int local_178 [2];
  longlong local_170;
  char local_168 [80];
  char local_118 [128];
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStackY_1a8;
  local_170 = 0;
  iVar2 = FUN_000193d8(param_1,&local_170);
  if (iVar2 < 0) {
    if (local_170 != 0) {
      ZwClose();
    }
  }
  else {
    local_178[0] = 1;
    FUN_00011568(&local_170,L"ChildEnable",local_178,1);
    lVar1 = local_170;
    if (local_178[0] == 0) {
      if (local_170 != 0) {
        ZwClose();
      }
    }
    else {
      local_118[0] = '\0';
      local_168[0] = '\0';
      local_98[0] = '\0';
      local_178[0] = 0x80;
      iVar2 = FUN_000112ac(local_170,L"ChildDeviceId",1,local_118,local_178);
      if (iVar2 != 0) {
        local_118[0] = '\0';
      }
      if (iVar2 < 0) {
        uVar3 = FUN_000117c0(local_118,(char *)(param_1 + 0x1a3c),0x80);
        FUN_000117c0(local_118 + uVar3,"&AVS",0x80 - uVar3);
      }
      if (local_118[0] == '\0') {
        FUN_000117c0(local_118,"BCOUSB_AVS",0x80);
      }
      local_178[0] = 0x50;
      iVar2 = FUN_000112ac(lVar1,L"ChildDeviceEnumerator",1,local_168,local_178);
      if (iVar2 != 0) {
        local_168[0] = '\0';
      }
      if (iVar2 < 0) {
        FUN_000117c0(local_168,"BCOUSB_ENUM",0x50);
      }
      local_178[0] = 0x78;
      iVar2 = FUN_000112ac(lVar1,L"ChildDeviceDescription",1,local_98,local_178);
      if (iVar2 != 0) {
        local_98[0] = '\0';
      }
      if (iVar2 < 0) {
        FUN_000117c0(local_98,"USB WDM Audio Device",0x78);
      }
      FUN_00012480(param_1,local_168,local_118,local_98);
      if (lVar1 != 0) {
        ZwClose(lVar1);
      }
    }
  }
  FUN_00026110(local_18 ^ (ulonglong)auStackY_1a8);
  return;
}

