// rea decompile_all
// name: FUN_00021314
// address: 0x21314
// body: available
// range: 0x21314-0x214f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00021314(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = 0;
  lVar5 = 0;
  do {
    if (lVar5 == 0) {
      if ((longlong *)*param_1 == param_1) goto LAB_000213f3;
      lVar5 = *param_1 - param_1[2];
    }
    else {
      plVar4 = *(longlong **)(param_1[2] + lVar5);
      if (plVar4 == param_1) {
LAB_000213f3:
        param_2[0x1e1] = 0;
        lVar5 = 0;
        plVar4 = param_1 + 3;
        while( true ) {
          if (lVar5 == 0) {
            if ((longlong *)*plVar4 == plVar4) {
              return;
            }
            lVar5 = *plVar4 - param_1[5];
          }
          else {
            plVar2 = *(longlong **)(param_1[5] + lVar5);
            if (plVar2 == plVar4) {
              return;
            }
            lVar5 = (longlong)plVar2 - param_1[5];
          }
          if (lVar5 == 0) break;
          if (0xf < param_2[0x1e1]) {
            return;
          }
          puVar1 = param_2 + (ulonglong)param_2[0x1e1] * 0x16 + 0x1e2;
          memcpy(puVar1,(void *)(lVar5 + 0x100),0x58);
          puVar1[7] = *(uint *)(lVar5 + 0x1c8);
          if (*(longlong *)(lVar5 + 0x1b8) == 0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = *(uint *)(*(longlong *)(lVar5 + 0x1b8) + 4);
          }
          puVar1[8] = uVar3;
          *puVar1 = *(uint *)(*(longlong *)(lVar5 + 0x28) + 0xe0);
          puVar1[1] = (uint)*(byte *)(*(longlong *)(lVar5 + 0x30) + 0x30);
          *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(lVar5 + 0xb0);
          *(undefined1 *)((longlong)puVar1 + 9) = *(undefined1 *)(lVar5 + 0xb1);
          puVar1[0x13] = *(uint *)(lVar5 + 0x48);
          puVar1[0x14] = *(uint *)(lVar5 + 0x4c);
          puVar1[0x15] = *(uint *)(lVar5 + 0x50);
          param_2[0x1e1] = param_2[0x1e1] + 1;
        }
        return;
      }
      lVar5 = (longlong)plVar4 - param_1[2];
    }
    if ((lVar5 == 0) || (0xf < *param_2)) goto LAB_000213f3;
    puVar1 = param_2 + (ulonglong)*param_2 * 0x1e + 1;
    memcpy(puVar1,(void *)(lVar5 + 0x100),0x78);
    puVar1[8] = *(uint *)(lVar5 + 0x180);
    puVar1[10] = (uint)*(byte *)(lVar5 + 0x184);
    *puVar1 = *(uint *)(*(longlong *)(lVar5 + 0x28) + 0xe0);
    puVar1[1] = (uint)*(byte *)(*(longlong *)(lVar5 + 0x30) + 0x30);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(lVar5 + 0xb0);
    *(undefined1 *)((longlong)puVar1 + 9) = *(undefined1 *)(lVar5 + 0xb1);
    puVar1[0x1b] = *(uint *)(lVar5 + 0x48);
    puVar1[0x1d] = *(uint *)(lVar5 + 0x4c);
    puVar1[0x1c] = *(uint *)(lVar5 + 0x50);
    *param_2 = *param_2 + 1;
  } while( true );
}

