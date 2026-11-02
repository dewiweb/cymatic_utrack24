// rea decompile_all
// name: FUN_00650e50
// address: 0x650e50
// body: available
// range: 0x650e50-0x650fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650e50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int *in_ECX;
  byte *in_EDX;
  int iVar5;
  
  iVar5 = *in_ECX;
  if (*(char *)((int)in_ECX + 9) != '\b') {
    return;
  }
  cVar1 = (char)in_ECX[2];
  if ((cVar1 == '\x02') && (iVar2 = iVar5, pbVar3 = in_EDX, param_1 != 0)) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*in_EDX & 0xf8) << 5 | in_EDX[1] & 0xf8) << 2 | (uint)(in_EDX[2] >> 3))
                         + param_1);
      in_EDX = in_EDX + 3;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)in_ECX + 9);
    *(byte *)((int)in_ECX + 0xb) = bVar4;
    *(undefined1 *)(in_ECX + 2) = 3;
    *(undefined1 *)((int)in_ECX + 10) = 1;
    if (7 < bVar4) {
      in_ECX[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  else {
    if ((cVar1 != '\x06') || (iVar2 = iVar5, pbVar3 = in_EDX, param_1 == 0)) {
      if (cVar1 != '\x03') {
        return;
      }
      if (param_2 == 0) {
        return;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *in_EDX = *(byte *)((uint)*in_EDX + param_2);
        in_EDX = in_EDX + 1;
      }
      return;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pbVar3 = *(byte *)((((*in_EDX & 0xf8) << 5 | in_EDX[1] & 0xf8) << 2 | (uint)(in_EDX[2] >> 3))
                         + param_1);
      in_EDX = in_EDX + 4;
      pbVar3 = pbVar3 + 1;
    }
    bVar4 = *(byte *)((int)in_ECX + 9);
    *(byte *)((int)in_ECX + 0xb) = bVar4;
    *(undefined1 *)(in_ECX + 2) = 3;
    *(undefined1 *)((int)in_ECX + 10) = 1;
    if (7 < bVar4) {
      in_ECX[1] = (uint)(bVar4 >> 3) * iVar5;
      return;
    }
  }
  in_ECX[1] = (uint)bVar4 * iVar5 + 7 >> 3;
  return;
}

