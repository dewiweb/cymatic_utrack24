// rea decompile_all
// name: FUN_000160ac
// address: 0x160ac
// body: available
// range: 0x160ac-0x1617b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000160ac(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar1 = DAT_00029268;
  iVar3 = 0x20;
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = 8;
  if (*(longlong *)(DAT_00029268 + 0x1f0) != 0) {
    iVar3 = *(int *)(*(longlong *)(DAT_00029268 + 0x1f0) + 0x18);
    iVar2 = *(int *)(*(longlong *)(DAT_00029268 + 0x1f0) + 0x1c);
  }
  uVar7 = (iVar2 + iVar3) * 0x7d + *(int *)(DAT_00029268 + 0x758);
  if ((*(uint *)(DAT_00029268 + 0x754) != 0) &&
     (uVar6 = (ulonglong)*(uint *)(DAT_00029268 + 0x6fc) *
              (ulonglong)*(uint *)(DAT_00029268 + 0x754), iVar4 = (int)(uVar6 / 1000000),
     499999 < uVar6 % 1000000)) {
    iVar4 = iVar4 + 1;
  }
  *param_2 = iVar4;
  if ((uVar7 != 0) &&
     (uVar6 = (ulonglong)*(uint *)(lVar1 + 0x6fc) * (ulonglong)uVar7, iVar5 = (int)(uVar6 / 1000000)
     , 499999 < uVar6 % 1000000)) {
    iVar5 = iVar5 + 1;
  }
  param_2[1] = iVar5;
  return 0;
}

