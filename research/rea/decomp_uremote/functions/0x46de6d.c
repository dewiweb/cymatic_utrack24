// rea decompile_all
// name: FUN_0046de6d
// address: 0x46de6d
// body: available
// range: 0x46de6d-0x46df40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46df3f to 0x46df62 FUN_0046df62 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_0046de6d(int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_30;
  locale local_1c [4];
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x46de79;
  local_18 = 0;
  if (*(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) != 0) {
    FUN_005cd524();
  }
  local_8 = 0;
  if ((*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8) == 0) &&
     (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c) != 0)) {
    FUN_0046dfb3();
  }
  local_8 = 1;
  if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) {
    FUN_00460724();
    local_8._0_1_ = 2;
    piVar3 = (int *)FUN_0047104e();
    std::locale::~locale(local_1c);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar1 = *(int *)(*param_1 + 4);
    uVar5 = *(undefined4 *)((int)param_1 + iVar1 + 0x28);
    iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
    local_30 = local_30 & 0xffffff00;
    (**(code **)(*piVar3 + 0xc))
              (&param_2,local_30,uVar5,iVar4,*(undefined1 *)((int)param_1 + iVar1 + 0x30),
               CONCAT71(param_2._1_7_,(char)param_2));
    if ((char)param_2 != '\0') {
      local_18 = 4;
    }
    local_8 = 1;
    piVar3 = (int *)FUN_0046df62(local_30,uVar5,iVar4);
    return piVar3;
  }
  if (local_18 != 0) {
    FUN_0046dff2(local_18,0);
  }
  local_8 = 5;
  cVar2 = thunk_FUN_005c4124();
  if (cVar2 == '\0') {
    FUN_0046f478();
  }
  local_8 = 0xffffffff;
  if (*(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) != 0) {
    FUN_005cd52d();
  }
  return param_1;
}

