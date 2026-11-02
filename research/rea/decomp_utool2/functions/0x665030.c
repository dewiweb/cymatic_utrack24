// rea decompile_all
// name: FUN_00665030
// address: 0x665030
// body: available
// range: 0x665030-0x665100 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665030(uint param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  char *in_EDX;
  
  if ((((0xb < param_1) && (*in_EDX == 'A')) && (in_EDX[1] == 'd')) &&
     (((in_EDX[2] == 'o' && (in_EDX[3] == 'b')) && (in_EDX[4] == 'e')))) {
    cVar1 = in_EDX[8];
    bVar2 = in_EDX[0xb];
    cVar3 = in_EDX[7];
    iVar6 = *in_ECX;
    cVar4 = in_EDX[5];
    cVar5 = in_EDX[6];
    *(uint *)(iVar6 + 0x20) = (uint)CONCAT11(in_EDX[9],in_EDX[10]);
    *(uint *)(iVar6 + 0x18) = (uint)CONCAT11(cVar4,cVar5);
    *(uint *)(iVar6 + 0x1c) = (uint)CONCAT11(cVar3,cVar1);
    *(uint *)(iVar6 + 0x24) = (uint)bVar2;
    *(undefined4 *)(*in_ECX + 0x14) = 0x4c;
    (**(code **)(*in_ECX + 4))();
    *(byte *)((int)in_ECX + 0x109) = bVar2;
    *(undefined1 *)(in_ECX + 0x42) = 1;
    return;
  }
  *(undefined4 *)(*in_ECX + 0x14) = 0x4e;
  *(uint *)(*in_ECX + 0x18) = param_1 + param_2;
  (**(code **)(*in_ECX + 4))();
  return;
}

