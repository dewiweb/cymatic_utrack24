// rea decompile_all
// name: FUN_006246b0
// address: 0x6246b0
// body: available
// range: 0x6246b0-0x62471a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_006246b0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = __allmul(*in_ECX,in_ECX[1],0xdeece66d,5);
  uVar2 = (uint)(lVar5 + 0xb);
  in_ECX[1] = (uint)((ulonglong)(lVar5 + 0xb) >> 0x20) & 0xffff;
  uVar1 = in_ECX[1];
  lVar5 = __allmul(uVar2,uVar1,0xdeece66d,5);
  uVar3 = (uint)(lVar5 + 0xb);
  *in_ECX = uVar3;
  uVar4 = (uint)((ulonglong)(lVar5 + 0xb) >> 0x20);
  in_ECX[1] = uVar4 & 0xffff;
  return CONCAT44(uVar2 >> 0x10 | uVar1 << 0x10,uVar3 >> 0x10 | uVar4 * 0x10000);
}

