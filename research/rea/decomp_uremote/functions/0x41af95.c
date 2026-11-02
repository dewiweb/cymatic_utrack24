// rea decompile_all
// name: FUN_0041af95
// address: 0x41af95
// body: available
// range: 0x41af95-0x41b1e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041af95(undefined4 *param_1)

{
  char *_Str1;
  undefined1 *puVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = 0;
  puVar1 = (undefined1 *)param_1[2];
  local_30 = *param_1;
  local_3c = 0xa0;
  if (puVar1 == (undefined1 *)0x0) {
    iVar2 = 6;
  }
  else {
    local_2c = puVar1;
    _Str1 = (char *)FUN_0041ab40();
    if (((_Str1 != (char *)0x0) && (local_40 == 0x10)) &&
       (iVar2 = _strncmp(_Str1,"StartFontMetrics",0x10), iVar2 == 0)) {
LAB_0041b189:
      iVar2 = FUN_0041ab40();
      if (iVar2 != 0) {
        iVar2 = FUN_0041ab7c(0x10);
        if (iVar2 < 0x1f) {
          if (iVar2 == 0x1e) {
            local_28 = 4;
            iVar2 = FUN_0041aa27(param_1,1);
            if (iVar2 == 1) {
              *puVar1 = (undefined1)local_24;
              goto LAB_0041b189;
            }
          }
          else if (iVar2 == 0) {
            local_28 = 2;
            iVar2 = FUN_0041aa27(param_1,1);
            if (iVar2 == 1) {
              *(undefined4 *)(puVar1 + 0x14) = local_24;
              goto LAB_0041b189;
            }
          }
          else {
            if (iVar2 == 0xe) {
              local_28 = 2;
              iVar2 = FUN_0041aa27(param_1,1);
              if (iVar2 != 1) goto LAB_0041b1aa;
              *(undefined4 *)(puVar1 + 0x18) = local_24;
              goto LAB_0041b189;
            }
            if (iVar2 == 0x14) {
              return 0;
            }
            if (iVar2 != 0x1a) goto LAB_0041b189;
            local_28 = 2;
            local_20 = 2;
            local_18 = 2;
            local_10 = 2;
            iVar2 = FUN_0041aa27(param_1,4);
            if (iVar2 == 4) {
              *(undefined4 *)(puVar1 + 4) = local_24;
              *(undefined4 *)(puVar1 + 8) = local_1c;
              *(undefined4 *)(puVar1 + 0xc) = local_14;
              *(undefined4 *)(puVar1 + 0x10) = local_c;
              goto LAB_0041b189;
            }
          }
        }
        else {
          if (iVar2 != 0x28) {
            if (iVar2 == 0x2d) {
              local_34 = 0;
              iVar2 = FUN_0041ac23(param_1,&local_34);
              if (iVar2 != 0) goto LAB_0041b1aa;
              local_3c = FUN_0041af44(param_1,local_34);
              if (local_3c != 0) {
                return local_3c;
              }
            }
            else if (iVar2 == 0x31) {
              local_3c = FUN_0041aee2();
              puVar1 = local_2c;
              if (local_3c == 0) {
                return 0;
              }
              goto LAB_0041b1aa;
            }
            goto LAB_0041b189;
          }
          iVar2 = FUN_0041ac23(param_1,&local_38);
          if (iVar2 != 0) goto LAB_0041b1aa;
          if ((local_38 == 0) || (local_38 == 2)) goto LAB_0041b189;
          local_3c = 7;
        }
      }
LAB_0041b1aa:
      FUN_00411a5c(*(undefined4 *)(puVar1 + 0x1c));
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      FUN_00411a5c(*(undefined4 *)(puVar1 + 0x24));
      *(undefined4 *)(puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      *puVar1 = 0;
      return local_3c;
    }
    iVar2 = 2;
  }
  return iVar2;
}

