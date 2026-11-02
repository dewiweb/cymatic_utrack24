// rea decompile_all
// name: __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
// address: 0x4cc1b4
// body: available
// range: 0x4cc1b4-0x4cc235 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  
  if (((uint)param_1->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(param_1);
    puVar5 = &DAT_00c76390;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &DAT_00c76390;
    }
    else {
      puVar3 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_00c8a348)[(int)uVar2 >> 6]);
    }
    if (puVar3[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar5 = (undefined *)((uVar2 & 0x3f) * 0x30 + (&DAT_00c8a348)[(int)uVar2 >> 6]);
      }
      if ((puVar5[0x2d] & 1) == 0) goto LAB_004cc231;
    }
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_004d0d1c();
    bVar1 = false;
  }
  else {
LAB_004cc231:
    bVar1 = true;
  }
  return bVar1;
}

