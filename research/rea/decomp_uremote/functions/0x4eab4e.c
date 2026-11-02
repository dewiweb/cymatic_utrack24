// rea decompile_all
// name: FUN_004eab4e
// address: 0x4eab4e
// body: available
// range: 0x4eab4e-0x4ead11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004eab4e(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined8 uVar5;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4eab5a;
  cVar2 = FUN_004e97f3();
  uVar1 = param_1;
  local_14[0] = CONCAT31(local_14[0]._1_3_,'\x01' - (cVar2 != '\0'));
  if (*(int *)(in_ECX + 0x110) == 0) {
    uVar3 = FUN_00465153(&param_1);
    local_8 = 0;
    FUN_004e2314(uVar1,0x1003,uVar3,local_14[0],0);
    local_8 = 0xffffffff;
    FUN_004652d6();
    uVar3 = FUN_00465153(&param_1);
    local_8 = 1;
    FUN_004e2314(uVar1,0x1004,uVar3,*(int *)(in_ECX + 0xdc) != *(int *)(in_ECX + 0xe0),0);
    local_8 = 0xffffffff;
    FUN_004652d6();
  }
  uVar3 = FUN_00465153(&param_1);
  local_8 = 2;
  FUN_004e2314(uVar1,0x1005,uVar3,local_14[0],0);
  local_8 = 0xffffffff;
  FUN_004652d6();
  uVar3 = FUN_00465153(&param_1);
  local_8 = 3;
  FUN_004e2314(uVar1,0x1002,uVar3,local_14[0],0);
  local_8 = 0xffffffff;
  FUN_004652d6();
  FUN_004e23d1();
  uVar3 = FUN_00465153(&param_1);
  local_8 = 4;
  FUN_004e2314(uVar1,0x1006,uVar3,1,0);
  local_8 = 0xffffffff;
  FUN_004652d6();
  FUN_004e23d1();
  iVar4 = FUN_004eb933();
  if (iVar4 != 0) {
    FUN_00465153(&param_1);
    uVar3 = 0;
    local_8 = 5;
    uVar5 = FUN_00472a69(0);
    FUN_004e2314(uVar1,0x1008,(int)((ulonglong)uVar5 >> 0x20),(uint)uVar5 & 0xff,uVar3);
    local_8 = 0xffffffff;
    FUN_004652d6();
    FUN_00465153(local_14);
    uVar3 = 0;
    local_8 = 6;
    uVar5 = FUN_00472a75(0);
    FUN_004e2314(uVar1,0x1009,(int)((ulonglong)uVar5 >> 0x20),(uint)uVar5 & 0xff,uVar3);
    FUN_004652d6();
  }
  return;
}

