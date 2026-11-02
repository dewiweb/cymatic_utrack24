// rea decompile_all
// name: FUN_006f81c0
// address: 0x6f81c0
// body: available
// range: 0x6f81c0-0x6f8462 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f81c0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort in_FPUControlWord;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 local_10;
  double local_8;
  
  local_8 = in_XMM0._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || (auVar5 = in_XMM0, (in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = CONCAT44(0x6f8457,(undefined4)local_10);
    FUN_004e4e8f();
    return;
  }
  while( true ) {
    uVar4 = auVar5._0_8_;
    uVar1 = (uint)(ushort)(auVar5._6_2_ >> 4);
    dVar6 = (double)(uVar4 & 0xfffff80000000 | 0x3ff0000000000000);
    auVar5._8_8_ = ((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) - dVar6) *
                   *(double *)
                    (&UNK_007386d8 +
                    (SUB82((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) +
                           4398046511103.008,0) & 0x7f0)) +
                   (dVar6 * *(double *)
                             (&UNK_007386d8 +
                             (SUB82((double)(uVar4 & 0xfffffffffffff | 0x3ff0000000000000) +
                                    4398046511103.008,0) & 0x7f0)) - 0.43359375);
    uVar2 = uVar1 - 1;
    if (uVar2 < 0x7fe) {
      return;
    }
    local_10 = -(ulonglong)(local_8 == 0.0);
    if ((short)local_10 != 0) break;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < 0x7ff) {
        local_10 = 0xfffffffffffff;
        if ((double)((ulonglong)local_8 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return;
        }
        uVar3 = 0x3e9;
      }
      else if (((uVar1 & 0x7ff) < 0x7ff) ||
              (in_XMM0._0_4_ == 0 && ((ulonglong)local_8 & 0xfffff00000000) == 0)) {
        local_10 = -0x8000000000000;
        uVar3 = 9;
      }
      else {
        uVar3 = 0x3e9;
      }
      goto LAB_006f83f4;
    }
    auVar5._0_8_ = local_8 * 4503599627370496.0;
  }
  local_10 = -0x10000000000000;
  uVar3 = 8;
LAB_006f83f4:
  ___libm_error_support(&local_8,&local_8,&local_10,uVar3);
  return;
}

