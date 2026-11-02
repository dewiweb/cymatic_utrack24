// rea decompile_all
// name: FUN_00665110
// address: 0x665110
// body: available
// range: 0x665110-0x66535c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665110(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char *in_EDX;
  
  param_2 = param_2 + param_1;
  if ((((param_1 < 0xe) || (*in_EDX != 'J')) || (in_EDX[1] != 'F')) ||
     (((in_EDX[2] != 'I' || (in_EDX[3] != 'F')) || (in_EDX[4] != '\0')))) {
    if (((param_1 < 6) || (*in_EDX != 'J')) ||
       ((in_EDX[1] != 'F' || (((in_EDX[2] != 'X' || (in_EDX[3] != 'X')) || (in_EDX[4] != '\0'))))))
    {
      *(undefined4 *)(*in_ECX + 0x14) = 0x4d;
    }
    else {
      cVar1 = in_EDX[5];
      if (cVar1 != '\x10') {
        if (cVar1 == '\x11') {
          *(undefined4 *)(*in_ECX + 0x14) = 0x6d;
          *(int *)(*in_ECX + 0x18) = param_2;
          (**(code **)(*in_ECX + 4))();
          return;
        }
        if (cVar1 == '\x13') {
          *(undefined4 *)(*in_ECX + 0x14) = 0x6e;
          *(int *)(*in_ECX + 0x18) = param_2;
          (**(code **)(*in_ECX + 4))();
          return;
        }
        *(undefined4 *)(*in_ECX + 0x14) = 0x59;
        *(uint *)(*in_ECX + 0x18) = (uint)(byte)in_EDX[5];
        *(int *)(*in_ECX + 0x1c) = param_2;
        (**(code **)(*in_ECX + 4))();
        return;
      }
      *(undefined4 *)(*in_ECX + 0x14) = 0x6c;
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x40) = 1;
    *(char *)((int)in_ECX + 0x101) = in_EDX[5];
    *(char *)((int)in_ECX + 0x102) = in_EDX[6];
    *(char *)((int)in_ECX + 0x103) = in_EDX[7];
    *(ushort *)(in_ECX + 0x41) = (ushort)(byte)in_EDX[8] * 0x100 + (ushort)(byte)in_EDX[9];
    *(ushort *)((int)in_ECX + 0x106) = (ushort)(byte)in_EDX[10] * 0x100 + (ushort)(byte)in_EDX[0xb];
    if (*(char *)((int)in_ECX + 0x101) != '\x01') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x77;
      *(uint *)(*in_ECX + 0x18) = (uint)*(byte *)((int)in_ECX + 0x101);
      *(uint *)(*in_ECX + 0x1c) = (uint)*(byte *)((int)in_ECX + 0x102);
      (**(code **)(*in_ECX + 4))();
    }
    iVar2 = *in_ECX;
    *(uint *)(iVar2 + 0x18) = (uint)*(byte *)((int)in_ECX + 0x101);
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)in_ECX + 0x102);
    *(uint *)(iVar2 + 0x20) = (uint)*(ushort *)(in_ECX + 0x41);
    *(uint *)(iVar2 + 0x24) = (uint)*(ushort *)((int)in_ECX + 0x106);
    *(uint *)(iVar2 + 0x28) = (uint)*(byte *)((int)in_ECX + 0x103);
    *(undefined4 *)(*in_ECX + 0x14) = 0x57;
    (**(code **)(*in_ECX + 4))();
    if (in_EDX[0xc] != '\0' || in_EDX[0xd] != '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x5a;
      *(uint *)(*in_ECX + 0x18) = (uint)(byte)in_EDX[0xc];
      *(uint *)(*in_ECX + 0x1c) = (uint)(byte)in_EDX[0xd];
      (**(code **)(*in_ECX + 4))();
    }
    param_2 = param_2 + -0xe;
    if (param_2 == (uint)(byte)in_EDX[0xc] * (uint)(byte)in_EDX[0xd] * 3) {
      return;
    }
    *(undefined4 *)(*in_ECX + 0x14) = 0x58;
  }
  *(int *)(*in_ECX + 0x18) = param_2;
  (**(code **)(*in_ECX + 4))();
  return;
}

