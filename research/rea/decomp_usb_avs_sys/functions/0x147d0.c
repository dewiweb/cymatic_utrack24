// rea decompile_all
// name: FUN_000147d0
// address: 0x147d0
// body: available
// range: 0x147d0-0x14876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_000147d0(undefined8 *param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  undefined1 local_28 [8];
  longlong local_20;
  int local_18;
  
  lVar3 = -1;
  local_18 = 0;
  psVar4 = param_3;
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  RtlInitUnicodeString(local_28);
  uVar2 = ZwSetValueKey(*param_1,local_28,0,1,param_3,~(uint)lVar3 * 2);
  uVar5 = uVar2 & 0xffffffff;
  if (local_20 != 0) {
    uVar2 = uVar5;
    if (local_18 == 1) {
      RtlFreeUnicodeString(local_28);
    }
    else if (local_18 == 2) {
      ExFreePoolWithTag(local_20,0);
      return uVar5;
    }
  }
  return uVar2;
}

