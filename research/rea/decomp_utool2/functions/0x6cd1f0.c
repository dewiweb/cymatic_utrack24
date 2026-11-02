// rea decompile_all
// name: FUN_006cd1f0
// address: 0x6cd1f0
// body: available
// range: 0x6cd1f0-0x6cd422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072676f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  piVar4 = (int *)FUN_006cecc0();
  piVar1 = in_ECX;
  if (piVar4 != (int *)0x0) {
    for (; piVar4 != piVar1; piVar1 = (int *)piVar1[3]) {
      if (piVar1 == (int *)0x0) {
        cVar3 = (**(code **)(*piVar4 + 0x9c))();
        if (cVar3 == '\0') {
          ExceptionList = local_10;
          return;
        }
        break;
      }
    }
  }
  if (in_ECX == (int *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)FUN_0040de70();
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_006cbdc0();
  local_8._0_1_ = 1;
  FUN_0048f150(&stack0xffffff60);
  FUN_006e0ff0(local_38,0);
  local_20 = param_5;
  local_28 = param_2;
  local_24 = param_3;
  local_11 = FUN_0048f270();
  FUN_0048f180();
  local_8._0_1_ = 0;
  (**(code **)(*local_1c + 0x14))();
  if (local_18 != (undefined4 *)0x0) {
    if (local_18[2] != 0) {
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        local_8._0_1_ = 2;
        DAT_00c8a67c = FUN_006cb960();
        local_8._0_1_ = 0;
      }
      FUN_006cb130();
      FUN_004b0b00(&local_18,FUN_00426f1d);
      FUN_0048cfe0(FUN_00426f1d);
    }
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_18 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_18)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

