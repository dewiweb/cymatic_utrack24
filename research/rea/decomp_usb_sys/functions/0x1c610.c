// rea decompile_all
// name: FUN_0001c610
// address: 0x1c610
// body: available
// range: 0x1c610-0x1c7fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong * FUN_0001c610(ulonglong param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *unaff_RBX;
  uint uVar5;
  
  puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,0x70,0x5f6e6577);
  if (puVar3 == (ulonglong *)0x0) {
    puVar3 = (ulonglong *)0x0;
  }
  else {
    FUN_000264d0(puVar3,0,0x70);
    puVar4 = puVar3 + 0xb;
    puVar3[1] = (ulonglong)puVar3;
    *puVar3 = (ulonglong)puVar3;
    puVar3[0xd] = 0;
    puVar3[0xc] = (ulonglong)puVar4;
    *puVar4 = (ulonglong)puVar4;
  }
  if (puVar3 != (ulonglong *)0x0) {
    puVar3[10] = param_1;
    uVar5 = 0;
    puVar3[2] = *param_2;
    puVar3[3] = param_2[1];
    puVar3[4] = param_2[2];
    puVar3[8] = *param_3;
    *(char *)(puVar3 + 9) = (char)param_3[1];
    if ((int)puVar3[4] != 0) {
      do {
        puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x48,0x5f6e6577);
        if (puVar4 == (ulonglong *)0x0) {
          puVar4 = (ulonglong *)0x0;
        }
        else {
          FUN_000264d0(puVar4,0,0x48);
          puVar4[5] = 0;
          puVar4[7] = 0;
          puVar4[1] = (ulonglong)puVar4;
          *puVar4 = (ulonglong)puVar4;
        }
        if (puVar4 == (ulonglong *)0x0) {
          goto LAB_0001c7ba;
        }
        puVar4[8] = (ulonglong)puVar3;
        uVar5 = uVar5 + 1;
        puVar4[7] = puVar3[10];
        plVar2 = (longlong *)puVar3[0xc];
        plVar1 = (longlong *)((longlong)puVar4 + puVar3[0xd]);
        *plVar1 = *plVar2;
        plVar1[1] = (longlong)plVar2;
        *(longlong **)(*plVar2 + 8) = plVar1;
        *plVar2 = (longlong)plVar1;
        puVar4[2] = param_2[3];
        puVar4[3] = param_2[4];
        puVar4[4] = param_2[5];
        puVar4[5] = puVar4[3];
        *(undefined1 *)(puVar4 + 6) = *(undefined1 *)((longlong)puVar4 + 0x12);
        *(uint *)((longlong)puVar4 + 0x34) = (uint)(ushort)puVar4[2];
        param_2 = param_2 + 3;
      } while (uVar5 < (uint)puVar3[4]);
    }
    puVar3[10] = param_1;
    plVar2 = *(longlong **)(param_1 + 0x1ba8);
    plVar1 = (longlong *)((longlong)puVar3 + *(longlong *)(param_1 + 0x1bb0));
    *plVar1 = *plVar2;
    plVar1[1] = (longlong)plVar2;
    *(longlong **)(*plVar2 + 8) = plVar1;
    *plVar2 = (longlong)plVar1;
  }
  return unaff_RBX;
LAB_0001c7ba:
  puVar4 = (ulonglong *)puVar3[0xb];
  if (puVar4 == puVar3 + 0xb) {
LAB_0001c7ee:
    ExFreePoolWithTag(puVar3,0);
    return unaff_RBX;
  }
  *(ulonglong *)puVar4[1] = *puVar4;
  *(ulonglong *)(*puVar4 + 8) = puVar4[1];
  puVar4[1] = (ulonglong)puVar4;
  *puVar4 = (ulonglong)puVar4;
  if (puVar4 == (ulonglong *)puVar3[0xd]) goto LAB_0001c7ee;
  ExFreePoolWithTag();
  goto LAB_0001c7ba;
}

