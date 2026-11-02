// rea decompile_all
// name: FUN_004dabab
// address: 0x4dabab
// body: available
// range: 0x4dabab-0x4dad2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dabab(int param_1,undefined4 param_2,undefined *param_3,int *param_4)

{
  undefined4 uStack_6c;
  undefined1 **ppuStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined *puStack_58;
  uint uStack_54;
  undefined1 *local_44;
  undefined1 auStack_40 [44];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005ddb28;
  local_14 = ExceptionList;
  uStack_54 = DAT_00955fd4 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  if (*param_4 == 0) {
    puStack_5c = *(undefined1 **)(param_1 + 0x1c);
    puStack_60 = *(undefined1 **)(param_1 + 0x18);
    puStack_58 = (undefined *)0x1;
    uStack_64 = 2;
    ppuStack_68 = &local_44;
    uStack_6c = 0x4dac04;
    FUN_0047e303();
    puStack_58 = (undefined *)0x4dac0b;
    FUN_0049f5e8();
    puStack_58 = (undefined *)0x4dac14;
    FUN_004c4d7a();
    puStack_58 = (undefined *)0x4dac1f;
    FUN_0047cc87();
    puStack_58 = param_3;
    uStack_c = 0;
    uStack_64 = 0;
    ppuStack_68 = (undefined1 **)0x8;
    local_44 = (undefined1 *)&uStack_6c;
    puStack_60 = (undefined1 *)0x2;
    puStack_5c = auStack_40;
    FUN_0047620f(&uStack_6c,_DAT_0095768c);
    FUN_004a22e1();
    puStack_60 = (undefined1 *)0x4dac63;
    FUN_004a2302();
    uStack_c = 0xffffffff;
    puStack_58 = (undefined *)0x4dac6f;
    FUN_0047cca3();
  }
  local_44 = (undefined1 *)&puStack_58;
  puStack_5c = (undefined1 *)0x4dac7d;
  FUN_004d076d();
  puStack_5c = (undefined1 *)0x4dac87;
  FUN_0047cda7();
  puStack_58 = (undefined *)0x0;
  puStack_5c = (undefined1 *)0x0;
  puStack_60 = (undefined1 *)0x0;
  uStack_64 = param_2;
  ppuStack_68 = (undefined1 **)0x4dac95;
  FUN_0047d915();
  puStack_5c = (undefined1 *)0x3f666666;
  ppuStack_68 = &local_44;
  uStack_64 = 0x3e6b851f;
  uStack_6c = 0x4dacbb;
  puStack_60 = (undefined1 *)&puStack_58;
  local_44 = (undefined1 *)&puStack_58;
  FUN_00476599();
  uStack_64 = 0x4dacc2;
  FUN_0047620f();
  puStack_5c = (undefined1 *)0x4dacc9;
  FUN_0047cda7();
  puStack_58 = &DAT_0095d798;
  puStack_5c = param_3;
  puStack_60 = (undefined1 *)0x4dacd7;
  FUN_0047d2ae();
  puStack_5c = (undefined1 *)0x3f4ccccd;
  uStack_64 = 0x4dacf3;
  puStack_60 = (undefined1 *)&puStack_58;
  local_44 = (undefined1 *)&puStack_58;
  FUN_0047620f();
  puStack_5c = (undefined1 *)0x4dacfa;
  FUN_0047cda7();
  puStack_58 = &DAT_0095d798;
  puStack_5c = (undefined1 *)0x40000000;
  puStack_60 = (undefined1 *)0x4dad0e;
  puStack_5c = (undefined1 *)FUN_0047badf();
  puStack_60 = param_3;
  uStack_64 = 0x4dad19;
  FUN_0047d2d0();
  ExceptionList = local_14;
  return;
}

