// rea decompile_all
// name: FUN_004f0efc
// address: 0x4f0efc
// body: available
// range: 0x4f0efc-0x4f0fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f0efc(undefined4 param_1,HDC param_2,char param_3,int param_4,int param_5,
                 undefined1 param_6)

{
  int *piVar1;
  int unaff_EBX;
  undefined1 uStack0000000d;
  undefined1 uStack0000000e;
  undefined1 uStack0000000f;
  undefined1 local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  SetMapMode(param_2,1);
  if (param_3 == '\0') {
    StretchDIBits(param_2,param_4,param_5,*(int *)(unaff_EBX + 0xc),*(int *)(unaff_EBX + 0x10),0,0,
                  *(int *)(unaff_EBX + 0xc),*(int *)(unaff_EBX + 0x10),*(void **)(unaff_EBX + 0xa4),
                  (BITMAPINFO *)(unaff_EBX + 0x34),0,0xcc0020);
  }
  else {
    piVar1 = (int *)FUN_004f0b41(local_3c,param_1);
    local_2c = *piVar1;
    local_28 = piVar1[1];
    local_24 = piVar1[2];
    local_20 = piVar1[3];
    local_c = -param_4;
    local_8 = -param_5;
    local_14 = local_24 - local_2c;
    local_10 = local_20 - local_28;
    uStack0000000e = param_6;
    uStack0000000f = 1;
    uStack0000000d = 0;
    param_3 = 0;
    local_1c = local_2c;
    local_18 = local_28;
    (*DAT_0095d6a8)(param_1,0,&local_1c,&local_14,*(undefined4 *)(unaff_EBX + 0xa0),&local_c,0,
                    &param_3,2);
  }
  return;
}

