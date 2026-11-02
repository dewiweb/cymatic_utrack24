// rea decompile_all
// name: _iswctype
// address: 0x4d9736
// body: available
// range: 0x4d9736-0x4d9794 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  uint in_ECX;
  WCHAR local_c;
  undefined2 uStack_a;
  uint local_8;
  
  if (_C == 0xffff) {
LAB_004d974b:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_8._0_2_ = *(ushort *)(PTR_DAT_00c76274 + (uint)_C * 2);
    }
    else {
      _local_c = CONCAT22((short)(in_ECX >> 0x10),_C);
      local_8 = in_ECX & 0xffff0000;
      BVar2 = GetStringTypeW(1,&local_c,1,(LPWORD)&local_8);
      if (BVar2 == 0) goto LAB_004d974b;
    }
    uVar1 = (uint)((ushort)local_8 & _Type);
  }
  return uVar1;
}

