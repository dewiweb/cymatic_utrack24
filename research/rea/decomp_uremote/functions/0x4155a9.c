// rea decompile_all
// name: FUN_004155a9
// address: 0x4155a9
// body: available
// range: 0x4155a9-0x415860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004155a9(void)

{
  short sVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 uVar3;
  short *_Dst;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int local_c;
  char local_5;
  
  uVar4 = in_EAX[0x19];
  iVar2 = FUN_004148df();
  if ((((iVar2 == 0) && (iVar2 = FUN_00414bcb(), iVar2 == 0)) &&
      ((local_5 = FUN_00414b4e(in_EAX[0x2f]), local_5 != '\0' ||
       (iVar2 = FUN_00415300(), iVar2 == 0)))) &&
     ((((iVar2 = FUN_00414e5b(), iVar2 == 0 && (iVar2 = FUN_00414f9a(), iVar2 == 0)) &&
       (iVar2 = FUN_00415102(), iVar2 == 0)) &&
      ((local_5 == '\0' || (iVar2 = FUN_00415300(), iVar2 == 0)))))) {
    *in_EAX = 1;
    in_EAX[1] = 0;
    in_EAX[2] = 0x92;
    if (*(char *)((int)in_EAX + 199) != '\0') {
      in_EAX[2] = 0x96;
    }
    local_c = FUN_004153fe();
    if (local_c == 0) {
      iVar2 = FUN_00414b6e("FAMILY_NAME");
      if ((iVar2 == 0) || (*(char *)(iVar2 + 4) == '\0')) {
        in_EAX[5] = 0;
      }
      else {
        uVar3 = FUN_00411aaa(uVar4,*(undefined4 *)(iVar2 + 8),&local_c);
        in_EAX[5] = uVar3;
        if (local_c != 0) {
          return 3;
        }
      }
      in_EAX[4] = in_EAX[0x48] + 1;
      in_EAX[7] = 1;
      _Dst = (short *)FUN_00411976(0x10,0,&local_c);
      sVar5 = 0;
      in_EAX[8] = _Dst;
      if (local_c == 0) {
        sVar1 = 0;
        _memset(_Dst,0,0x10);
        *_Dst = *(short *)(in_EAX + 0x34) + *(short *)(in_EAX + 0x33);
        iVar2 = FUN_00414b6e("AVERAGE_WIDTH");
        if (iVar2 == 0) {
          iVar2 = *_Dst * 2;
          iVar6 = 3;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8) + 5;
          iVar6 = 10;
        }
        _Dst[1] = (short)(iVar2 / iVar6);
        iVar2 = FUN_00414b6e("POINT_SIZE");
        if (iVar2 != 0) {
          *(int *)(_Dst + 2) = (*(int *)(iVar2 + 8) * 0x70800 + 0x8d27) / 0x11a4e;
        }
        iVar2 = FUN_00414b6e("PIXEL_SIZE");
        if (iVar2 != 0) {
          *(int *)(_Dst + 6) = (int)*(short *)(iVar2 + 8) << 6;
        }
        iVar2 = FUN_00414b6e("RESOLUTION_X");
        if (iVar2 != 0) {
          sVar1 = *(short *)(iVar2 + 8);
        }
        iVar2 = FUN_00414b6e("RESOLUTION_Y");
        if (iVar2 != 0) {
          sVar5 = *(short *)(iVar2 + 8);
        }
        if (*(int *)(_Dst + 6) == 0) {
          *(int *)(_Dst + 6) = *(int *)(_Dst + 2);
          if (sVar5 != 0) {
            *(int *)(_Dst + 6) = ((int)sVar5 * *(int *)(_Dst + 2)) / 0x48;
          }
        }
        if ((sVar1 == 0) || (sVar5 == 0)) {
          iVar2 = *(int *)(_Dst + 6);
        }
        else {
          iVar2 = ((int)sVar1 * *(int *)(_Dst + 6)) / (int)sVar5;
        }
        *(int *)(_Dst + 4) = iVar2;
        iVar2 = FUN_00414b6e("CHARSET_REGISTRY");
        iVar6 = FUN_00414b6e("CHARSET_ENCODING");
        if (iVar2 == 0) {
          return local_c;
        }
        if (*(char *)(iVar2 + 4) == '\0') {
          return local_c;
        }
        if (iVar6 == 0) {
          return local_c;
        }
        if (*(char *)(iVar6 + 4) == '\0') {
          return local_c;
        }
        uVar3 = FUN_00411aaa(uVar4,*(undefined4 *)(iVar6 + 8),&local_c);
        in_EAX[0x2c] = uVar3;
        if (local_c == 0) {
          uVar4 = FUN_00411aaa(uVar4,*(undefined4 *)(iVar2 + 8),&local_c);
          in_EAX[0x2d] = uVar4;
          if (local_c == 0) {
            return 0;
          }
        }
      }
    }
  }
  return 3;
}

