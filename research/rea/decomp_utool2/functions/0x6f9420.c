// rea decompile_all
// name: __libm_sse2_sqrt_precise
// address: 0x6f9420
// body: available
// range: 0x6f9420-0x6f951d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __libm_sse2_sqrt_precise
   
   Library: Visual Studio 2015 Release */

void __libm_sse2_sqrt_precise(void)

{
  undefined4 uVar1;
  ushort in_FPUControlWord;
  short in_XMM0_Wa;
  short in_XMM0_Wb;
  short in_XMM0_Wc;
  ushort in_XMM0_Wd;
  undefined8 local_8;
  
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    FUN_004d7194();
    return;
  }
  if (((in_XMM0_Wd & 0x7ff0) == 0x7ff0) &&
     (((((in_XMM0_Wd & 0xf) != 0 || (in_XMM0_Wc != 0)) || (in_XMM0_Wb != 0)) || (in_XMM0_Wa != 0))))
  {
    local_8._0_4_ = CONCAT22(in_XMM0_Wb,in_XMM0_Wa);
    local_8._0_6_ = CONCAT24(in_XMM0_Wc,(int)local_8);
    local_8._6_1_ = (undefined1)in_XMM0_Wd;
    local_8._7_1_ = (undefined1)(in_XMM0_Wd >> 8);
    local_8 = CONCAT17(local_8._7_1_,CONCAT16(local_8._6_1_,(undefined6)local_8)) | 0x8000000000000;
    uVar1 = 0x3f5;
  }
  else {
    if (((in_XMM0_Wd & 0x8000) == 0) ||
       (((local_8._0_4_ = CONCAT22(in_XMM0_Wb,in_XMM0_Wa), (int)local_8 == 0 &&
         (in_XMM0_Wd == 0x8000)) && (in_XMM0_Wc == 0)))) {
      return;
    }
    local_8 = 0xfff8000000000000;
    uVar1 = 0x31;
  }
  ___libm_error_support(&local_8,&local_8,&local_8,uVar1);
  return;
}

