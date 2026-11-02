// rea decompile_all
// name: FUN_00658ca0
// address: 0x658ca0
// body: available
// range: 0x658ca0-0x658ceb inclusive
// range: 0x658cf0-0x658d3c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00658ca0(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x288);
  uVar4 = *(undefined4 *)(in_ECX + 0x28c);
  uVar5 = *(undefined4 *)(in_ECX + 0x290);
  uVar2 = *(undefined4 *)(in_ECX + 0x2cc);
  *(undefined4 *)(in_EDX + 0x28) = *(undefined4 *)(in_ECX + 0x284);
  *(undefined4 *)(in_EDX + 0x2c) = uVar3;
  *(undefined4 *)(in_EDX + 0x30) = uVar4;
  *(undefined4 *)(in_EDX + 0x34) = uVar5;
  uVar3 = *(undefined4 *)(in_ECX + 0x298);
  uVar4 = *(undefined4 *)(in_ECX + 0x29c);
  uVar5 = *(undefined4 *)(in_ECX + 0x2a0);
  *(undefined4 *)(in_EDX + 0x38) = *(undefined4 *)(in_ECX + 0x294);
  *(undefined4 *)(in_EDX + 0x3c) = uVar3;
  *(undefined4 *)(in_EDX + 0x40) = uVar4;
  *(undefined4 *)(in_EDX + 0x44) = uVar5;
  uVar3 = *(undefined4 *)(in_ECX + 0x2a8);
  uVar4 = *(undefined4 *)(in_ECX + 0x2ac);
  uVar5 = *(undefined4 *)(in_ECX + 0x2b0);
  *(undefined4 *)(in_EDX + 0x48) = *(undefined4 *)(in_ECX + 0x2a4);
  *(undefined4 *)(in_EDX + 0x4c) = uVar3;
  *(undefined4 *)(in_EDX + 0x50) = uVar4;
  *(undefined4 *)(in_EDX + 0x54) = uVar5;
  uVar3 = *(undefined4 *)(in_ECX + 0x2b8);
  uVar4 = *(undefined4 *)(in_ECX + 700);
  uVar5 = *(undefined4 *)(in_ECX + 0x2c0);
  *(undefined4 *)(in_EDX + 0x58) = *(undefined4 *)(in_ECX + 0x2b4);
  *(undefined4 *)(in_EDX + 0x5c) = uVar3;
  *(undefined4 *)(in_EDX + 0x60) = uVar4;
  *(undefined4 *)(in_EDX + 100) = uVar5;
  *(undefined8 *)(in_EDX + 0x68) = *(undefined8 *)(in_ECX + 0x2c4);
  *(undefined4 *)(in_EDX + 0x70) = uVar2;
  uVar1 = *(ushort *)(in_EDX + 0x72);
  if ((short)uVar1 < 0) {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xffffe7fa;
    FUN_00659160(0x10,0xffffffff);
    return;
  }
  if ((char)uVar1 < '\0') {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x800;
  }
  else {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xfffff7ff;
  }
  if ((uVar1 & 2) == 0) {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xfffffffb;
  }
  else {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 4;
  }
  if ((uVar1 & 1) != 0) {
    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 1;
    return;
  }
  *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xfffffffe;
  return;
}

