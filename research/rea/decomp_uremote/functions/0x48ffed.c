// rea decompile_all
// name: FUN_0048ffed
// address: 0x48ffed
// body: available
// range: 0x48ffed-0x490235 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048ffed(undefined4 param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *unaff_ESI;
  
  if ((((CONCAT31(CONCAT21(CONCAT11(*unaff_ESI,unaff_ESI[1]),unaff_ESI[2]),unaff_ESI[3]) == param_2)
       && (uVar1 = CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0x80],unaff_ESI[0x81]),unaff_ESI[0x82]),
                            unaff_ESI[0x83]), uVar1 < 0x1555554b)) &&
      ((uVar1 + 0xb) * 0xc <= param_2)) &&
     (uVar1 = CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0x40],unaff_ESI[0x41]),unaff_ESI[0x42]),
                       unaff_ESI[0x43]), uVar1 < 0xffff)) {
    if (3 < uVar1) {
      FUN_0048fdfd();
    }
    if (CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0x24],unaff_ESI[0x25]),unaff_ESI[0x26]),unaff_ESI[0x27]
                ) == 0x61637370) {
      iVar2 = _memcmp(unaff_ESI + 0x44,&DAT_005ff5f8,0xc);
      if (iVar2 != 0) {
        FUN_0048fdfd();
      }
      iVar2 = CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0x10],unaff_ESI[0x11]),unaff_ESI[0x12]),
                       unaff_ESI[0x13]);
      if (iVar2 == 0x47524159) {
        if ((param_3 & 2) != 0) goto LAB_00490226;
      }
      else if ((iVar2 != 0x52474220) || ((param_3 & 2) == 0)) goto LAB_00490226;
      iVar2 = CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0xc],unaff_ESI[0xd]),unaff_ESI[0xe]),
                       unaff_ESI[0xf]);
      if ((iVar2 != 0x61627374) && (iVar2 != 0x6c696e6b)) {
        if ((iVar2 != 0x6d6e7472) &&
           ((iVar2 == 0x6e6d636c ||
            (((iVar2 != 0x70727472 && (iVar2 != 0x73636e72)) && (iVar2 != 0x73706163)))))) {
          FUN_0048fdfd();
        }
        iVar2 = CONCAT31(CONCAT21(CONCAT11(unaff_ESI[0x14],unaff_ESI[0x15]),unaff_ESI[0x16]),
                         unaff_ESI[0x17]);
        if ((iVar2 == 0x4c616220) || (iVar2 == 0x58595a20)) {
          return 1;
        }
      }
    }
  }
LAB_00490226:
  uVar3 = FUN_0048fdfd();
  return uVar3;
}

