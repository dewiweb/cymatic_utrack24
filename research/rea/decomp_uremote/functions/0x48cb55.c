// rea decompile_all
// name: FUN_0048cb55
// address: 0x48cb55
// body: available
// range: 0x48cb55-0x48cc5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048cb55(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *_Src;
  int iVar3;
  int *unaff_EDI;
  int local_c;
  undefined4 uStack_8;
  
  unaff_EDI[1] = 0;
  local_c = FUN_0040d13e();
  puVar1 = _malloc(0x54);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(*unaff_EDI + 0x14) = 0x36;
    *(undefined4 *)(*unaff_EDI + 0x18) = 0;
    (**(code **)*unaff_EDI)();
  }
  *puVar1 = FUN_0048c23a;
  puVar1[1] = FUN_0048c332;
  puVar1[2] = FUN_0048c3be;
  puVar1[3] = FUN_0048c450;
  puVar1[4] = FUN_0048c4ee;
  puVar1[5] = FUN_0048c54f;
  puVar1[6] = FUN_0048c5b0;
  puVar1[7] = FUN_0048c81a;
  puVar1[8] = FUN_0048c938;
  puVar1[9] = FUN_0048ca5b;
  puVar1[10] = FUN_0048cb30;
  puVar1[0xc] = 1000000000;
  puVar1[0xb] = local_c;
  iVar3 = 1;
  puVar2 = puVar1 + 0x10;
  do {
    puVar2[-2] = 0;
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0x54;
  unaff_EDI[1] = (int)puVar1;
  _Src = _getenv("JPEGMEM");
  if (_Src != (char *)0x0) {
    uStack_8._3_1_ = 'x';
    iVar3 = FID_conflict__sscanf(_Src,"%ld%c",&local_c,(int)&uStack_8 + 3);
    if (0 < iVar3) {
      if ((uStack_8._3_1_ == 'm') || (uStack_8._3_1_ == 'M')) {
        local_c = local_c * 1000;
      }
      puVar1[0xb] = local_c * 1000;
    }
  }
  return;
}

