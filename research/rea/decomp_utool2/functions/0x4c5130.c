// rea decompile_all
// name: ___longjmp_internal
// address: 0x4c5130
// body: available
// range: 0x4c5130-0x4c51dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    ___longjmp_internal
   
   Library: Visual Studio 2019 Release */

void ___longjmp_internal(int param_1)

{
  int iVar1;
  PVOID TargetFrame;
  EXCEPTION_RECORD local_54;
  
  local_54.ExceptionCode = 0x80000026;
  local_54.ExceptionFlags = 0;
  local_54.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_54.ExceptionAddress = (PVOID)0x0;
  local_54.NumberParameters = 0;
  TargetFrame = *(PVOID *)(param_1 + 0x18);
  if (TargetFrame != ExceptionList) {
    RtlUnwind(TargetFrame,(PVOID)0x4c517e,&local_54,(PVOID)0x0);
  }
  if (TargetFrame != (PVOID)0x0) {
    iVar1 = __rt_probe_read4_4(param_1 + 0x20);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x20) != 0x56433230)) {
      __local_unwind2(TargetFrame,*(undefined4 *)(param_1 + 0x1c));
    }
    else if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
  }
  __NLG_Notify(0);
                    /* WARNING: Could not recover jumptable at 0x004c51da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))();
  return;
}

