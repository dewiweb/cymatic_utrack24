// rea decompile_all
// name: FUN_0047d9b4
// address: 0x47d9b4
// body: available
// range: 0x47d9b4-0x47dab6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d9b4(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_6c [9];
  undefined1 auStack_48 [52];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dc3f9;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_14;
  local_6c[0] = 0;
  if (*unaff_EBX != 0) {
    iVar1 = *(int *)*param_1;
    uVar4 = FUN_004a9028(param_3,param_4,param_5,uVar3);
    cVar2 = (**(code **)(iVar1 + 0x28))(uVar4);
    if (cVar2 != '\0') {
      FUN_004a9028(param_7,param_8,param_9,uVar3);
      FUN_0047e24b(local_6c);
      fVar7 = (float)param_3;
      uStack_c = 0;
      uVar8 = 0;
      puVar5 = auStack_48;
      fVar6 = (float)param_2;
      FUN_00477435((float)param_4 / (float)param_8,(float)param_5 / (float)param_9,puVar5,fVar6,
                   fVar7,0);
      uVar4 = FUN_0047713c(puVar5,fVar6,fVar7);
      FUN_0047dab7(uVar4,uVar8);
      FUN_004c4d7a();
    }
  }
  ExceptionList = local_14;
  return;
}

