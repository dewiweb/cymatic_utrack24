// rea decompile_all
// name: FUN_0001a5c0
// address: 0x1a5c0
// body: available
// range: 0x1a5c0-0x1a6c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001a5c0(longlong param_1)

{
  int extraout_EAX;
  int iVar1;
  longlong local_res10;
  longlong local_res18 [2];
  
  local_res18[1] = 0;
  local_res18[0] = 0;
  FUN_00016e98(local_res18 + 1,local_res18,param_1);
  iVar1 = extraout_EAX;
  if (-1 < extraout_EAX) {
    FUN_00011568(local_res18,L"ClockSourceIndex",(undefined4 *)(param_1 + 0x19a0),
                 *(undefined4 *)(param_1 + 0x19a0));
    local_res10 = 0;
    iVar1 = FUN_000193d8(param_1,&local_res10);
    if (-1 < iVar1) {
      FUN_00011568(&local_res10,L"DeviceInputLatency[us]",(undefined4 *)(DAT_00029268 + 0x754),
                   *(undefined4 *)(DAT_00029268 + 0x754));
      FUN_00011568(&local_res10,L"DeviceOutputLatency[us]",(undefined4 *)(DAT_00029268 + 0x758),
                   *(undefined4 *)(DAT_00029268 + 0x758));
      if (local_res10 != 0) {
        ZwClose();
      }
      if (local_res18[0] != 0) {
        ZwClose();
      }
      iVar1 = 0;
      goto LAB_0001a6ab;
    }
    if (local_res10 != 0) {
      ZwClose();
    }
  }
  if (local_res18[0] != 0) {
    ZwClose();
  }
LAB_0001a6ab:
  FUN_00016db0(local_res18 + 1);
  return iVar1;
}

