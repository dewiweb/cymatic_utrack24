// rea decompile_all
// name: FUN_005dc340
// address: 0x5dc340
// body: available
// range: 0x5dc340-0x5dc394 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dc340(undefined4 param_1,uint *param_2,int param_3,int param_4)

{
  int in_ECX;
  int extraout_ECX;
  int in_EDX;
  uint *puVar1;
  int iVar2;
  float fVar3;
  float in_XMM1_Da;
  float fVar4;
  float in_XMM2_Da;
  undefined8 uVar5;
  
  iVar2 = 0;
  if (0 < param_4) {
    param_3 = in_ECX - param_3;
    puVar1 = param_2;
    do {
      fVar4 = in_XMM1_Da;
      if (param_3 <= iVar2) {
        fVar4 = in_XMM2_Da;
      }
      fVar3 = *(float *)((int)puVar1 + (in_EDX - (int)param_2));
      uVar5 = FUN_00411660();
      puVar1 = (uint *)((ulonglong)uVar5 >> 0x20);
      iVar2 = iVar2 + 1;
      *puVar1 = (uint)(fVar4 <= fVar3 / *(float *)uVar5);
      puVar1 = puVar1 + 1;
      param_3 = extraout_ECX;
    } while (iVar2 < param_4);
  }
  return;
}

