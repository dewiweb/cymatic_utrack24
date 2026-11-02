// rea decompile_all
// name: FUN_005c9400
// address: 0x5c9400
// body: available
// range: 0x5c9400-0x5c95ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c9400(void)

{
  int iVar1;
  int *_Memory;
  char *pcVar2;
  int in_EDX;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071aca0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_EDX < -0x7787fff5) {
    if (in_EDX == -0x7787fff6) {
      pcVar2 = "Device already allocated";
    }
    else if (in_EDX < -0x7ffbfeef) {
      if (in_EDX == -0x7ffbfef0) {
        pcVar2 = "No aggregation";
      }
      else if (in_EDX == -0x7fffbfff) {
        pcVar2 = "Unsupported function";
      }
      else if (in_EDX == -0x7fffbffe) {
        pcVar2 = "No interface";
      }
      else {
        if (in_EDX != -0x7fffbffb) goto switchD_005c94df_caseD_8878001f;
        pcVar2 = "Generic error";
      }
    }
    else if (in_EDX == -0x7ff8fff2) {
      pcVar2 = "Out of memory";
    }
    else {
      if (in_EDX != -0x7ff8ffa9) goto switchD_005c94df_caseD_8878001f;
      pcVar2 = "Invalid parameter";
    }
  }
  else if (in_EDX < -0x7787ff7d) {
    if (in_EDX == -0x7787ff7e) {
      pcVar2 = "Already initialised";
    }
    else {
      switch(in_EDX) {
      case -0x7787ffe2:
        pcVar2 = "Control unavailable";
        break;
      default:
switchD_005c94df_caseD_8878001f:
        if (in_EDX < 0) {
          iVar1 = FUN_006104a0(local_14);
          *(undefined1 *)(iVar1 + -1) = 0x2d;
          iVar1 = iVar1 + -1;
        }
        else {
          iVar1 = FUN_006104a0(local_14);
        }
        FUN_004557e0(&local_15 + -iVar1);
        local_8 = 0;
        FUN_00637690(local_38);
        _Memory = (int *)(local_38[0] + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar1 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        goto LAB_005c95d1;
      case -0x7787ffce:
        pcVar2 = "Invalid call";
        break;
      case -0x7787ffba:
        pcVar2 = "Priority level error";
        break;
      case -0x7787ff9c:
        pcVar2 = "Bad format";
        break;
      case -0x7787ff88:
        pcVar2 = "No driver";
      }
    }
  }
  else if (in_EDX < -0x7787ff55) {
    if (in_EDX == -0x7787ff56) {
      pcVar2 = "Uninitialised";
    }
    else if (in_EDX == -0x7787ff6a) {
      pcVar2 = "Buffer lost";
    }
    else {
      if (in_EDX != -0x7787ff60) goto switchD_005c94df_caseD_8878001f;
      pcVar2 = "Another app has priority";
    }
  }
  else {
    if (in_EDX != 0) goto switchD_005c94df_caseD_8878001f;
    pcVar2 = "No error";
  }
  FUN_0045c990(pcVar2);
LAB_005c95d1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

