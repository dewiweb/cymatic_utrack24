// rea decompile_all
// name: FUN_004db452
// address: 0x4db452
// body: available
// range: 0x4db452-0x4db66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db452(undefined4 param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float extraout_ECX;
  float extraout_ECX_00;
  bool bVar4;
  float local_3c;
  int local_2c;
  undefined1 local_14 [4];
  double local_10;
  
  bVar4 = false;
  FUN_0047620f(&local_3c,_DAT_0095768c);
  FUN_0047cda7();
  fVar1 = (float)param_3;
  fVar2 = (float)param_2;
  local_3c = 3.0;
  FUN_0047d535(0,0,fVar2,fVar1);
  FUN_0047620f(&local_3c,0x3e4ccccd);
  FUN_0047cda7();
  local_3c = 1.0;
  FUN_0047d5bd(param_1,0x3f800000,0x3f800000,fVar2 - 2.0,fVar1 - 2.0,0x40400000);
  local_3c = param_4 * 7.0;
  iVar3 = FUN_004a8e4a();
  local_2c = 0;
  fVar2 = (fVar2 - 6.0) / 7.0;
  local_10 = (double)(fVar2 * 0.1);
  do {
    if (local_2c < iVar3) {
      if (local_2c < 6) {
        local_3c = 0.5;
        bVar4 = true;
        FUN_0047620f(local_14);
        local_3c = extraout_ECX;
      }
      FUN_004d076d();
      FUN_0047cda7();
      if (bVar4) {
        bVar4 = false;
      }
    }
    else {
      FUN_0047620f(&local_3c,0x3f19999a);
      FUN_0047cda7();
    }
    local_3c = fVar2 * 0.4;
    FUN_0047d535((float)local_2c * fVar2 + 3.0 + (float)local_10,0x40400000,fVar2 * 0.8,fVar1 - 6.0)
    ;
    local_2c = local_2c + 1;
    local_3c = extraout_ECX_00;
  } while (local_2c < 7);
  return;
}

