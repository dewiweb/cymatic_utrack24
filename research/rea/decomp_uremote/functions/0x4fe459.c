// rea decompile_all
// name: FUN_004fe459
// address: 0x4fe459
// body: available
// range: 0x4fe459-0x4fe593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fe459(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  short *in_ECX;
  int unaff_EDI;
  undefined4 local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if ((0 < param_2) && (0 < param_3)) {
    glBlendFunc(1,0x303);
    glEnable(0xbe2);
    cVar2 = FUN_004fe2da();
    if (cVar2 != '\0') {
      local_14 = in_ECX[4] + *in_ECX;
      local_18 = *in_ECX;
      local_e = in_ECX[2];
      local_16 = in_ECX[6] + in_ECX[2];
      local_12 = local_16;
      local_10 = local_18;
      local_c = local_14;
      local_a = local_e;
      iVar3 = FUN_004fe5e7();
      FUN_0043bc2d(param_4);
      FUN_004fe73b((float)param_2,(float)param_3,param_4);
      local_1c = 0;
      (**(code **)(unaff_EDI + 0xc))(1,&local_1c);
      (**(code **)(unaff_EDI + 4))(0x8892,local_1c);
      (**(code **)(unaff_EDI + 0x10))(0x8892,0x10,&local_18,0x88e4);
      uVar1 = *(undefined4 *)(iVar3 + 0x18);
      (**(code **)(unaff_EDI + 0x8c))(uVar1,2,0x1402,0,4,0);
      (**(code **)(unaff_EDI + 0x90))(uVar1);
      glDrawArrays(5,0,4);
      (**(code **)(unaff_EDI + 4))(0x8892,0);
      (**(code **)(unaff_EDI + 0x70))(0);
      (**(code **)(unaff_EDI + 0x94))(uVar1);
      (**(code **)(unaff_EDI + 8))(1,&local_1c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

