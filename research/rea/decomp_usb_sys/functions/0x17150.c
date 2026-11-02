// rea decompile_all
// name: FUN_00017150
// address: 0x17150
// body: available
// range: 0x17150-0x172dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00017150(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1d8 [32];
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 *local_1b0;
  undefined2 local_1a8 [120];
  short local_b8 [80];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_1d8;
  iVar1 = FUN_000140cc();
  iVar2 = FUN_00014134(DAT_00029268,local_b8);
  if ((*(longlong *)(param_1 + 0x10) != 0) ||
     (iVar3 = FUN_00011e80(param_1,*(undefined8 *)(DAT_00029268 + 0x10)), -1 < iVar3)) {
    if ((*(longlong *)(param_1 + 0x30) == 0) && (iVar1 != 0)) {
      local_1a8[0] = 0;
      local_1b8 = 0;
      local_1b0 = local_1a8;
      local_1b6 = 0xf0;
      RtlAppendUnicodeToString(&local_1b8,L"\\DosDevices\\");
      RtlAppendUnicodeToString(&local_1b8,L"{49F4A1FF-55DD-4d45-9743-7B623EFF0361}");
      FUN_0001204c(param_1,*(undefined8 *)(DAT_00029268 + 0x10),local_1a8,
                   (undefined2 *)(param_1 + 0x28));
    }
    if ((*(longlong *)(param_1 + 0x40) == 0) && (-1 < iVar2)) {
      local_1a8[0] = 0;
      local_1b8 = 0;
      local_1b0 = local_1a8;
      local_1b6 = 0xf0;
      RtlAppendUnicodeToString(&local_1b8,L"\\DosDevices\\");
      RtlAppendUnicodeToString(&local_1b8,local_b8);
      FUN_0001204c(param_1,*(undefined8 *)(DAT_00029268 + 0x10),local_1a8,
                   (undefined2 *)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  FUN_00026110(local_18 ^ (ulonglong)auStack_1d8);
  return;
}

