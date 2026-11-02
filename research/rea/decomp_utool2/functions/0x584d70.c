// rea decompile_all
// name: FUN_00584d70
// address: 0x584d70
// body: available
// range: 0x584d70-0x584fc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  undefined1 local_48 [52];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713097;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Button::Listener::vftable;
  *in_ECX = NewsItemComponent::vftable;
  *puVar1 = NewsItemComponent::vftable;
  in_ECX[0x1d] = param_1;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  FUN_006d2c10();
  local_8._0_1_ = 4;
  FUN_006d2c10();
  *(undefined1 *)(in_ECX + 0xac) = 0;
  FUN_00584500();
  local_8 = CONCAT31(local_8._1_3_,6);
  cVar3 = FUN_00586be0();
  if (cVar3 == '\0') {
    puVar5 = (undefined4 *)FUN_00586c60(local_48);
    cVar3 = *(char *)*puVar5;
    FUN_00636570();
    if (cVar3 != '\0') {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_004097d0(puVar1);
      }
      FUN_0045c990("To web browser");
      local_8._0_1_ = 8;
      FUN_006e54f0(&local_14);
      local_8 = CONCAT31(local_8._1_3_,6);
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      FUN_006e6170(0x1001f00,DAT_00c7ef88);
      (**(code **)(in_ECX[0x65] + 0x28))(1);
      FUN_006e5050(in_ECX + 0x65,0xffffffff);
    }
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
    }
    FUN_0045c990("Download and install");
    local_8._0_1_ = 7;
    FUN_006e54f0(&local_14);
    local_8 = CONCAT31(local_8._1_3_,6);
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_006e9790(in_ECX[0x22],in_ECX[0x23],100,0x14);
    FUN_006e6170(0x1001f00,DAT_00c7ef8c);
    FUN_006d2b30();
    (**(code **)(in_ECX[0x1e] + 0x28))(1);
    FUN_006e5050(in_ECX + 0x1e,0xffffffff);
    uVar4 = FUN_00586a80();
    *(undefined1 *)(in_ECX + 0xac) = uVar4;
  }
  FUN_005843b0(param_1[7]);
  (**(code **)(in_ECX[0xad] + 0x28))(1);
  FUN_006e5050(in_ECX + 0xad,0xffffffff);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

